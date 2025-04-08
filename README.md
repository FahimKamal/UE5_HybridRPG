# 🏯 Hybrid RPG - UE5 Hybrid RPG 🐉 (In Progress)

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![Unreal Engine](https://img.shields.io/badge/Unreal%20Engine-5.3.1-blueviolet)](https://www.unrealengine.com/)
[![Made with Blueprints](https://img.shields.io/badge/Made%20with-Blueprints-blue)](https://docs.unrealengine.com/en-US/Engine/Blueprints/index.html)
[![Uses PaperZD](https://img.shields.io/badge/Uses-PaperZD-orange)](https://www.fab.com/listings/6664e3b5-e376-47aa-a0dd-f7bbbd5b93c0) <!-- Fab/Marketplace link -->

---

<!-- 
======================================================================
=== VISUAL SHOWCASE - ADD YOUR GIF/SCREENSHOT HERE ===
======================================================================
Now is a GREAT time to add a GIF showing the animated Player character
moving and rotating within the "Stylized Eastern Village" environment,
demonstrating the fixed camera!
Replace the line below with your actual image/gif link when ready.
Example: 
<p align="center">
  <img src="Media/hybrid_rpg_showcase.gif" alt="Hybrid RPG Gameplay GIF" width="80%"/> 
</p>
====================================================================== 
-->
<!-- (Visual Showcase Placeholder - Fixed Camera Demo GIF Recommended!) -->

---

## 🎯 Overview

**Journey through ancient China!** **Hybrid RPG** is an open-source **Hybrid RPG** prototype being developed in **Unreal Engine 5.3.1**. It uniquely blends animated **2D characters** (powered by the **[PaperZD](https://www.fab.com/listings/6664e3b5-e376-47aa-a0dd-f7bbbd5b93c0)** plugin) that **rotate freely** with immersive **3D environments** from assets like the **[Stylized Eastern Village](https://fab.com/s/77cc7df74a61)** pack. The project focuses on **exploration**, **NPC interaction**, and uncovering **narrative threads**, all viewed from a **fixed-angle, position-following top-down style camera**.

This project serves as a portfolio piece demonstrating skills in Unreal Engine, Blueprint scripting, integrating specialized plugins (PaperZD), using environment assets, establishing character hierarchies, and building foundational RPG systems within a unique visual style. *(Note: Project name is temporary; creative name brainstorming planned!)*

---

## 📜 Premise (Placeholder - Story in Development)

> Whispers echo through the winding streets of the ancient city – tales of forgotten magic, hidden passages, and secrets held close by its inhabitants. As a traveler newly arrived [or perhaps seeking something specific?], you step onto the timeworn stones. The air hums with untold stories. What mysteries will you unravel as you explore the bustling markets, serene temples, and shadowy alleys? Your journey begins now...

*(This is a placeholder premise. A more defined story is currently under development!)*

---

## ✨ Key Features (Implemented & Planned)

*   🎭 **Hybrid 2D/3D Presentation:** Core visual style featuring 2D sprite characters in a 3D world.
*   🚶‍♂️ **Top-Down Exploration (Implemented):** Player character movement and input handling functional. **Characters rotate** to face movement direction.
*   📜 **PaperZD Integration (Implemented):** Idle and Run animations driven by Animation Blueprints for Player Character and 2 NPC types.
*   🔄 **Fixed-Angle Following Camera (Implemented):** Camera **maintains a fixed viewing angle** but **moves its position** to follow the player smoothly through the world.
*   🏗️ **Blueprint Character Hierarchy:** Planned structure: `BP_RPGChar_Base` -> (`BP_Player`, `BP_NPC`) -> `BP_Follower` (see details in code/design docs if added).
*   🗺️ **Ancient Chinese Setting (In Progress):** Base environment established using the free **[Stylized Eastern Village](https://fab.com/s/77cc7df74a61)** asset pack. Further customization planned.
*   💬 **NPC Interaction System (Planned):** Framework for initiating dialogue, simple quests, or receiving information.
*   🤖 **NPC Base Logic (Planned):** Foundation for NPC roaming and basic behaviors.
*   📖 **Narrative Framework (Planned):** Basic systems to support discovering story elements.
*   💡 **100% Blueprint Driven:** Developed entirely using Unreal Engine's Blueprint visual scripting.
*   🖼️ **Core Assets:** Includes sprite sheets (Player, 2 NPCs), initial sounds, UI elements, and the primary environment pack. (See Attributions).

---

<!-- 
======================================================================
=== ADDITIONAL SCREENSHOTS (Optional Section) ===
======================================================================
Add static screenshots here when available. Examples:
<p align="center">
  <img src="Media/player_in_village.png" alt="Player exploring the Eastern Village" width="45%"/>
  <img src="Media/npc_animation.png" alt="NPC Idle Animation" width="45%"/>
</p>
====================================================================== 
-->
## 📸 Screenshots (Placeholders)
<!-- (More Screenshots Area - Show player/NPCs in the new environment!) -->

---

## 💻 Technology Stack

*   **Engine:** Unreal Engine 5.5.1 ⚙️
*   **Core Logic:** Blueprints 📘
*   **2D Animation/Character Logic:** [PaperZD Plugin](https://www.fab.com/listings/6664e3b5-e376-47aa-a0dd-f7bbbd5b93c0) 📜
*   **Primary Environment Assets:** [Stylized Eastern Village](https://fab.com/s/77cc7df74a61) (Free Pack from Fab.com) 🏘️
*   **Other Assets:** Characters, UI, Sounds (See Attributions) 🎨🔊
*   **Version Control:** Git / GitHub 💾

---

## 📊 Project Status (In Progress)

*   ✅ **Foundation & Setup:** Core project structure, plugin integration complete.
*   ✅ **Asset Integration:** Initial sprite sheets, sounds, UI elements, and **Stylized Eastern Village environment pack** added.
*   ✅ **Core Animation System:** Idle/Run animations implemented via PaperZD AnimBPs for Player + 2 NPCs.
*   ✅ **Player Control & Movement:** Basic movement, **character rotation**, and input system functional.
*   ✅ **Camera System:** **Fixed-angle, position-following camera** implemented.
*   ⏳ **Next Steps:** Implementing planned Blueprint Class Hierarchy (`BP_RPGChar_Base`, etc.), implementing basic NPC roaming AI, prototyping the NPC interaction/dialogue system, refining environment layout.

---

## ⌨️ Controls (Current Implementation)

*   **Movement:** WASD / Arrow Keys (Mapped via Input Actions - Controls character movement and facing direction).
*   **Interact:** [Button - e.g., E or F] (Input Action exists, logic TBD).
*   **Menu Navigation:** Mouse Click 🖱️ (For potential future menus - Mouse does **not** control camera rotation).

---

## ▶️ Getting Started / Running the Project

**Option 1: Play Packaged Build (Not Yet Available)** 🎮

*   *Once available, instructions to download and run a pre-built version will be here.*

**Option 2: From Source (For Developers - Requires Unreal Engine 5.3.1 & PaperZD)** 🔧

1.  **Clone the repository:**
    ```bash
    git clone https://github.com/FahimKamal/UE5_HybridRPG.git
    ```
2.  **Navigate** to the cloned project directory (`UE5_HybridRPG`).
3.  **Ensure Unreal Engine 5.5.1** is installed via the Epic Games Launcher.
4.  **⚠️ Important: PaperZD Plugin Requirement:**
    *   This project requires the **free** [PaperZD Plugin](https://www.fab.com/listings/6664e3b5-e376-47aa-a0dd-f7bbbd5b93c0).
    *   The plugin *should* be included in the project's `Plugins` folder. Unreal Engine *should* detect it automatically.
    *   **If you encounter errors:** Please ensure you have **obtained and installed PaperZD** for your UE **5.5.1** engine installation. Get it here: [https://www.fab.com/listings/6664e3b5-e376-47aa-a0dd-f7bbbd5b93c0](https://www.fab.com/listings/6664e3b5-e376-47aa-a0dd-f7bbbd5b93c0)
5.  **Open** the `.uproject` file (`UE5_HybridRPG.uproject`) by double-clicking it.
6.  **Press Play** in the editor toolbar to run the current state of the project.

---

## 🌱 Learning & Development Goals

This project aims to explore and demonstrate proficiency in several key areas:

*   **Hybrid Development:** Integrating 2D assets (PaperZD) into a 3D UE5 environment.
*   **PaperZD Workflow:** Utilizing PaperZD for 2D animation and character logic.
*   **Blueprint Architecture:** Designing scalable RPG systems (characters via inheritance, interaction, etc.).
*   **World Building:** Using and potentially customizing environment asset packs.
*   **RPG System Fundamentals:** Implementing core RPG mechanics.
*   **Input Systems:** Using Unreal's Input Action system.
*   **Camera Control:** Implementing fixed-angle, follow cameras.

---

## 🔮 Future Plans / Potential Enhancements

*   ✨ **Deeper RPG Systems:** Inventory, stats, skills, quests.
*   🏘️ **Expanded World:** Customizing/expanding the Eastern Village, adding interiors or new areas.
*   🤖 **Advanced NPC Behaviors:** Implementing the `BP_Follower`, schedules, dynamic reactions, AI improvements (Behavior Trees?).
*   🎨 **Art & Polish:** More character animations, VFX, UI improvements.
*   🔊 **Audio Immersion:** More specific sounds, ambient loops.
*   💾 **Saving/Loading:** Game progress persistence.
*   💡 **Creative Name:** Brainstorming final project title.
*   📝 **Story Development:** Crafting and implementing the narrative.

---

## 📜 Assets & Attributions

This project uses freely available assets from various creators. Please see the [**ATTRIBUTIONS.md**](ATTRIBUTIONS.md) file for detailed license information and credits for Characters, UI, Sound, and **Environment** assets used.

---

## ©️ License

This project is licensed under the MIT License. The full license text can be found in the [LICENSE](LICENSE) file in the repository root. 📄