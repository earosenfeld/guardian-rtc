class WebRTCClient {
    constructor() {
        this.pc = null;
        this.dataChannel = null;
        this.video = document.getElementById('video');
        this.statusDiv = document.getElementById('status');
        this.jointStateDiv = document.createElement('div');
        this.jointStateDiv.className = 'joint-state';
        this.video.parentElement.appendChild(this.jointStateDiv);
        
        this.setupControlButtons();
    }

    async start() {
        try {
            // Create peer connection with STUN server
            this.pc = new RTCPeerConnection({
                iceServers: [
                    { urls: 'stun:stun.l.google.com:19302' }
                ]
            });
            
            // Handle incoming video
            this.pc.ontrack = (event) => {
                if (event.streams && event.streams[0]) {
                    this.video.srcObject = event.streams[0];
                }
            };

            // Handle ICE connection state changes
            this.pc.oniceconnectionstatechange = () => {
                this.updateStatus(this.pc.iceConnectionState);
            };

            // Create data channel
            this.dataChannel = this.pc.createDataChannel('control', {
                ordered: true
            });
            
            this.setupDataChannel();

            // Create and send offer
            const offer = await this.pc.createOffer();
            await this.pc.setLocalDescription(offer);

            const response = await fetch('/offer', {
                method: 'POST',
                headers: {
                    'Content-Type': 'application/json'
                },
                body: JSON.stringify({
                    sdp: this.pc.localDescription.sdp,
                    type: this.pc.localDescription.type
                })
            });

            if (!response.ok) {
                throw new Error(`HTTP error! status: ${response.status}`);
            }

            const answer = await response.json();
            await this.pc.setRemoteDescription(answer);

        } catch (e) {
            console.error('WebRTC error:', e);
            this.updateStatus('error', e.message);
        }
    }

    setupDataChannel() {
        this.dataChannel.onopen = () => {
            this.updateStatus('connected');
        };

        this.dataChannel.onclose = () => {
            this.updateStatus('disconnected');
        };

        this.dataChannel.onmessage = (event) => {
            try {
                const data = JSON.parse(event.data);
                if (data.joint_states) {
                    this.updateJointStates(data.joint_states);
                }
            } catch (e) {
                console.error('Error parsing message:', e);
            }
        };
    }

    setupControlButtons() {
        const buttons = {
            'up': 'ArrowUp',
            'down': 'ArrowDown',
            'left': 'ArrowLeft',
            'right': 'ArrowRight'
        };

        for (const [id, key] of Object.entries(buttons)) {
            const button = document.getElementById(id);
            
            // Mouse events
            button.onmousedown = () => this.sendCommand(key);
            button.onmouseup = () => this.sendCommand('stop');
            button.onmouseleave = () => this.sendCommand('stop');
            
            // Touch events
            button.ontouchstart = (e) => {
                e.preventDefault();
                this.sendCommand(key);
            };
            button.ontouchend = (e) => {
                e.preventDefault();
                this.sendCommand('stop');
            };
        }

        // Keyboard events
        document.addEventListener('keydown', (e) => {
            if (['ArrowUp', 'ArrowDown', 'ArrowLeft', 'ArrowRight'].includes(e.key)) {
                e.preventDefault();
                this.sendCommand(e.key);
            }
        });

        document.addEventListener('keyup', (e) => {
            if (['ArrowUp', 'ArrowDown', 'ArrowLeft', 'ArrowRight'].includes(e.key)) {
                e.preventDefault();
                this.sendCommand('stop');
            }
        });
    }

    sendCommand(key) {
        if (this.dataChannel && this.dataChannel.readyState === 'open') {
            this.dataChannel.send(JSON.stringify({ key }));
        }
    }

    updateStatus(state, message = '') {
        this.statusDiv.className = 'status';
        this.statusDiv.classList.add(state);
        
        switch (state) {
            case 'connected':
                this.statusDiv.textContent = 'Connected';
                break;
            case 'disconnected':
                this.statusDiv.textContent = 'Disconnected';
                break;
            case 'connecting':
                this.statusDiv.innerHTML = '<span class="loading"></span>Connecting...';
                break;
            case 'error':
                this.statusDiv.textContent = `Error: ${message}`;
                break;
            default:
                this.statusDiv.textContent = state;
        }
    }

    updateJointStates(states) {
        const text = Object.entries(states)
            .map(([joint, value]) => `${joint}: ${value.toFixed(2)}`)
            .join('\n');
        this.jointStateDiv.textContent = text;
    }
}

// Initialize WebRTC client when the page loads
window.addEventListener('load', () => {
    const client = new WebRTCClient();
    client.start();
}); 