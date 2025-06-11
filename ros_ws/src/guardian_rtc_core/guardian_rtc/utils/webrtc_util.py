"""
WebRTC utilities for handling media streams and data channels.
"""

import asyncio
from aiortc import RTCPeerConnection, RTCSessionDescription
from aiortc.contrib.media import MediaRelay

class WebRTCBridge:
    """Bridge between ROS 2 and WebRTC for teleoperation."""
    
    def __init__(self):
        self.pc = RTCPeerConnection()
        self.relay = MediaRelay()
        
    async def create_offer(self) -> RTCSessionDescription:
        """Create a WebRTC offer for the client."""
        # Create data channel for control commands
        self.control_channel = self.pc.createDataChannel("control")
        self.control_channel.on("message", self._on_control_message)
        
        # Create offer
        offer = await self.pc.createOffer()
        await self.pc.setLocalDescription(offer)
        
        return self.pc.localDescription
        
    async def handle_answer(self, answer: RTCSessionDescription):
        """Handle the answer from the client."""
        await self.pc.setRemoteDescription(answer)
        
    def _on_control_message(self, message):
        """Handle incoming control messages from the web client."""
        # TODO: Implement control message handling
        pass
        
    async def close(self):
        """Clean up WebRTC resources."""
        await self.pc.close() 