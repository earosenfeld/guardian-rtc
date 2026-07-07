"""Generate assets/ke_monitoring.png.

Simulates a 6-joint trajectory with an over-speed fault and runs the same
kinetic-energy check the safety node applies (0.5 * v^T * M_hat * v with the
conservative diagonal inertia bound from ``SafetyConfig``), showing the stop
event the node would publish.

Run from the repo root:

    python scripts/make_figures.py
"""
from __future__ import annotations

import sys
from pathlib import Path

import matplotlib

matplotlib.use("Agg")
import matplotlib.pyplot as plt
import numpy as np

REPO = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(REPO / "ros_ws" / "src" / "guardian_rtc_core"))

from guardian_rtc.config import SafetyConfig  # noqa: E402

OUT = REPO / "assets" / "ke_monitoring.png"


def main() -> None:
    config = SafetyConfig.from_yaml(
        str(REPO / "ros_ws" / "src" / "guardian_rtc_core" / "resource" / "default_limits.yaml")
    )
    n_joints = 6
    dt = 0.002
    t = np.arange(0.0, 10.0, dt)

    # Nominal motion: staggered sinusoidal joint velocities.
    v = np.zeros((t.size, n_joints))
    for j in range(n_joints):
        v[:, j] = (1.2 - 0.12 * j) * np.sin(2 * np.pi * (0.25 + 0.05 * j) * t + j)

    # Fault: joint 2 runaway starting at t = 6 s.
    fault = t >= 6.0
    v[fault, 1] += 9.0 * (t[fault] - 6.0)

    # Evaluate the safety check sample by sample, exactly like the node.
    M = config.get_inertia_matrix([0.0] * n_joints)
    ke = 0.5 * np.einsum("ij,jk,ik->i", v, M, v)

    stop_idx = int(np.argmax(ke > config.max_kinetic_energy))

    # After the stop event the controller ramps all joints to zero in ~250 ms.
    v_stopped = v.copy()
    ramp = np.clip(1.0 - (t[stop_idx:] - t[stop_idx]) / 0.25, 0.0, 1.0)
    v_stopped[stop_idx:] = v[stop_idx][None, :] * ramp[:, None]
    ke_stopped = 0.5 * np.einsum("ij,jk,ik->i", v_stopped, M, v_stopped)

    fig, (ax_v, ax_ke) = plt.subplots(
        2, 1, figsize=(9.5, 5.6), sharex=True, gridspec_kw={"hspace": 0.12}
    )

    for j in range(n_joints):
        ax_v.plot(t, v_stopped[:, j], lw=1.1,
                  label=f"joint_{j + 1}" if j in (0, 1) else None,
                  color=f"C{j}", alpha=0.9)
    ax_v.axvline(t[stop_idx], color="crimson", ls="--", lw=1.2)
    ax_v.set_ylabel("joint velocity [rad/s]")
    ax_v.set_title("GuardianRTC kinetic-energy monitor: over-speed fault → stop event")
    ax_v.legend(loc="upper left", fontsize=8, ncol=2)
    ax_v.annotate("joint_2 runaway", xy=(6.3, v_stopped[:, 1].max() * 0.75),
                  color="C1", fontsize=9)

    ax_ke.plot(t, ke_stopped, color="#1f6feb", lw=1.6,
               label=r"KE = $\frac{1}{2}\,v^{T}\hat{M}\,v$ (conservative bound)")
    ax_ke.axhline(config.max_kinetic_energy, color="crimson", ls="--", lw=1.2,
                  label=f"max_kinetic_energy = {config.max_kinetic_energy:.0f} J")
    ax_ke.axvline(t[stop_idx], color="crimson", ls="--", lw=1.2)
    ax_ke.plot(t[stop_idx], ke_stopped[stop_idx], "o", color="crimson", ms=7)
    ax_ke.annotate("StopEvent published,\ncontroller halted",
                   xy=(t[stop_idx], ke_stopped[stop_idx]),
                   xytext=(t[stop_idx] - 3.2, config.max_kinetic_energy * 0.62),
                   fontsize=9, color="crimson",
                   arrowprops=dict(arrowstyle="->", color="crimson"))
    ax_ke.set_xlabel("time [s]")
    ax_ke.set_ylabel("kinetic energy [J]")
    ax_ke.set_xlim(0, t[-1])
    ax_ke.legend(loc="upper left", fontsize=8)

    for ax in (ax_v, ax_ke):
        ax.grid(alpha=0.25)

    OUT.parent.mkdir(exist_ok=True)
    fig.savefig(OUT, dpi=110, bbox_inches="tight")
    print(f"wrote {OUT}")


if __name__ == "__main__":
    main()
