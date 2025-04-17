# 🏯 Pixel Pilgrim 🐉 (Completed Learning Project)

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![Unreal Engine](https://img.shields.io/badge/Unreal%20Engine-5.5.1-blueviolet)](https://www.unrealengine.com/)
[![Made with Blueprints](https://img.shields.io/badge/Made%20with-Blueprints-blue)](https://docs.unrealengine.com/en-US/Engine/Blueprints/index.html)
[![Uses PaperZD](https://img.shields.io/badge/Uses-PaperZD-orange)](https://www.fab.com/listings/6664e3b5-e376-47aa-a0dd-f7bbbd5b93c0) <!-- Fab/Marketplace link -->

---


https://github.com/user-attachments/assets/aba256cf-6dc8-45f2-b07e-d1039a4826b6


<!-- 
======================================================================
=== VISUAL SHOWCASE - REPLACE WITH YOUR BEST GIF/SCREENSHOT ===
======================================================================
Showcase the core gameplay loop! A GIF demonstrating movement, the 
occlusion effect, NPC interaction, and the dialogue system would be ideal.
Example: 
<p align="center">
  <img src="Media/pixel_pilgrim_showcase.gif" alt="Pixel Pilgrim Gameplay GIF" width="80%"/> 
</p>
====================================================================== 
-->
<!-- (Visual Showcase Placeholder - Gameplay Demo GIF Highly Recommended!) -->

---

## 🎯 Overview

**Step into another world!** **Pixel Pilgrim** is an open-source **Hybrid RPG** prototype developed in **Unreal Engine 5.5.1**. It uniquely blends animated **2D characters** (powered by the **[PaperZD](https://www.fab.com/listings/6664e3b5-e376-47aa-a0dd-f7bbbd5b93c0)** plugin) that **rotate freely** within immersive **3D environments** using assets like the **[Stylized Eastern Village](https://fab.com/s/77cc7df74a61)** pack, enhanced with a subtle **pixelation texture theme** for visual cohesion.

The game features **exploration**, a **Data Table-driven dialogue system** with animated text reveals, basic **NPC AI** (roaming and interaction response), a **follower mechanic**, an **object occlusion system** for improved visibility, and an introductory **cutscene** created with Sequencer. The perspective is a **fixed-angle, position-following top-down style camera**.

This project served primarily as a **learning exercise** and portfolio piece, demonstrating proficiency in various Unreal Engine systems, particularly Blueprint scripting, PaperZD integration, UI implementation (UMG), Data Tables, Material Functions/MPCs, and Sequencer basics within an RPG context.

---

## 📜 Premise

> A regular software engineer, unwinding after work by playing an RPG set in ancient China, drifts off to sleep... only to awaken *within* the game world itself! Disoriented but intrigued, this **Pixel Pilgrim** must navigate the unfamiliar streets of the city of Baishan, interacting with its inhabitants, uncovering secrets, and perhaps even finding companions like the skilled martial artist Mei. Can they adapt to this new reality and find their purpose?

*(Based on the developed story concept - Can be expanded)*

---

## ✨ Key Features Implemented

*   🎭 **Hybrid 2D/3D Presentation:** 2D pixel art characters seamlessly integrated into a 3D world with a cohesive pixelated texture theme.
*   🚶‍♂️ **Top-Down Exploration:** Smooth player movement (WASD) with character rotation based on direction.
*   📜 **PaperZD Animation:** Idle and Run animations implemented for Player and key NPCs via PaperZD Animation Blueprints.
*   🔄 **Fixed-Angle Following Camera:** Camera tracks the player's position while maintaining a fixed viewing angle.
*   👁️ **Object Occlusion System:** Objects blocking the view of the player dynamically fade/become masked for clear visibility, using Material Functions and MPCs.
*   💬 **Data-Driven Dialogue System:**
    *   Interaction prompts (animated text + glowing circle) appear on nearby NPCs.
    *   Dialogue displayed in speech bubbles above NPCs with a "typing" text reveal animation.
    *   Ability to skip text reveal.
    *   Conversations progress based on player input ('E'/'Enter').
    *   All dialogue content and sequencing managed via an **Unreal Data Table**.
*   🤖 **Basic NPC Logic:**
    *   NPCs turn to face the player when interaction is initiated.
    *   Implementation of simple random roaming AI using NavMesh.
    *   Distinction between interactable and ambient NPCs.
*   🤝 **Follower Mechanic:** System allows specific NPCs (e.g., Mei) to join the player's party and follow them after a conversation.
*   🎬 **Sequencer Introduction:** An introductory cutscene utilizing Sequencer for camera movement, animation triggering, and event calls.
*    меню **Main Menu & Pause Menu:** Functional main menu (Start/Quit) and in-game pause menu (Resume/Restart Main Menu/Quit).
*   💡 **100% Blueprint Driven:** Developed entirely using Unreal Engine's Blueprint visual scripting with added documentation within Blueprints.
*   🖼️ **Core Assets Integrated:** Includes sprite sheets, sounds (ambient + contextual bird chirping), UI elements, and environment pack. (See Attributions).

---

<!-- 
======================================================================
=== ADDITIONAL SCREENSHOTS (Optional Section) ===
======================================================================
Showcase different elements like the Occlusion effect, the Follower, the menus, etc.
<p align="center">
  <img src="Media/pixel_pilgrim_occlusion.png" alt="Object Occlusion in Pixel Pilgrim" width="45%"/>
  <img src="Media/pixel_pilgrim_follower.png" alt="NPC Follower in Pixel Pilgrim" width="45%"/>
</p>
====================================================================== 
-->
## 📸 Screenshots (Placeholders)
<!-- (Add compelling screenshots here!) -->

<p align="center">
  <img src="https://github.com/user-attachments/assets/ee58be83-399e-42c9-998d-dd97ce5e3f5e" alt="Screenshot 1 Description" width="45%"/> 
  <img src="https://github.com/user-attachments/assets/b9cf74b3-7ce2-48f7-bc77-9ec6da2c15b6" alt="Screenshot 2 Description" width="45%"/>
  <img src="https://github.com/user-attachments/assets/15782d42-dcd2-4ca0-9c08-6e3d6c1c6823" alt="Screenshot 3 Description" width="45%"/> 
  <img src="https://github.com/user-attachments/assets/25c68b09-c6fb-4f26-b770-461f21dd199b" alt="Screenshot 4 Description" width="45%"/>
  <img src="https://github.com/user-attachments/assets/4f2deb2b-c77a-49f8-b527-6a032f0630c3" alt="Screenshot 4 Description" width="45%"/>
</p>
---

## 💻 Technology Stack

*   **Engine:** Unreal Engine 5.5.1 ⚙️
*   **Core Logic:** Blueprints 📘
*   **Data Management:** Unreal Engine Data Tables (from CSV/Spreadsheet) 📊
*   **2D Animation/Character Logic:** [PaperZD Plugin](https://www.fab.com/listings/6664e3b5-e376-47aa-a0dd-f7bbbd5b93c0) 📜
*   **UI:** Unreal Motion Graphics (UMG) 🖥️
*   **Cinematics:** Sequencer 🎬
*   **Materials:** Material Functions, Material Parameter Collections (MPCs), Masked Blend Mode ✨
*   **AI:** Navigation Mesh (NavMesh), Basic AI Controller Logic 🤖
*   **Primary Environment Assets:** [Stylized Eastern Village](https://fab.com/s/77cc7df74a61) (Free Pack from Fab.com) 🏘️
*   **Other Assets:** Characters, UI, Sounds (See Attributions) 🎨🔊
*   **Version Control:** Git / GitHub 💾

---

## 📊 Project Status (Complete - Learning Phase)

*   ✅ **Foundation & Core Systems:** Project setup, plugin integration, basic movement, camera.
*   ✅ **Asset Integration & Styling:** Characters, environment, sounds, UI added; Pixelated texture theme applied.
*   ✅ **Animation System:** PaperZD setup and basic animations functional.
*   ✅ **Interaction & Dialogue:** Full loop implemented - proximity detection, prompts, UI bubbles, typing effect, skip logic, data table integration, conversation flow.
*   ✅ **NPC Behaviors:** Basic roaming AI, turning-to-face player implemented. Follower mechanic functional.
*   ✅ **Visibility/Occlusion:** Dynamic object fading system implemented.
*   ✅ **Cinematics:** Introductory cutscene functional via Sequencer.
*   ✅ **Menus:** Main Menu (Start/Quit) and Pause Menu (Resume/Restart/Quit) implemented.
*   🎯 **Learning Goals Met:** The primary objective of learning these Unreal Engine systems through practical application was successfully achieved.

---

## ⌨️ Controls

*   **Movement:** WASD / Arrow Keys (Controls character movement and facing direction).
*   **Interact / Advance Dialogue / Skip Dialogue:** 'E' / 'Enter' Key.
*   **Pause Menu:** 'Esc' Key.
*   **Menu Navigation:** Mouse Click 🖱️.

---

## ▶️ Getting Started / Running the Project

**Option 1: Play Packaged Build (Recommended for Players)** 🎮

1.  Go to the **[Releases](https://github.com/FahimKamal/UE5_HybridRPG/releases)** section of this repository. *(<-- Make sure this link is correct!)*
2.  Download the latest `PixelPilgrim_vX.X.zip` (or similarly named) file.
3.  Extract the contents of the ZIP file.
4.  Run the game executable (e.g., `PixelPilgrim.exe`). No Unreal Engine installation needed!

**Option 2: From Source (For Developers - Requires Unreal Engine 5.5.1 & PaperZD)** 🔧
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

## 🌱 Learning & Development Insights

This project provided valuable hands-on experience with:

*   Implementing a **Hybrid 2D/3D workflow** in UE5.
*   Utilizing the **PaperZD plugin** for 2D character animation and logic.
*   Designing **Blueprint architecture** for character inheritance and modular systems.
*   Creating **data-driven systems** using Unreal Data Tables for dialogue management.
*   Developing **dynamic UI elements** (UMG) positioned in world space (speech bubbles) and standard menus.
*   Solving visibility challenges in fixed-camera perspectives using **Material Functions and MPCs** for object occlusion.
*   Basic **AI implementation** (roaming, turning) using NavMesh.
*   Implementing core RPG mechanics like **interaction and follower systems**.
*   Using **Sequencer** for introductory cinematics and event triggering.
*   Standard game features like **Main Menus and Pause Menus**.

---

## 🔮 Future Plans / Potential Enhancements (Post-Learning Phase)

While this phase of the project is complete, potential future directions could include:

*   ✨ **Deeper RPG Systems:** Inventory, stats, skills, combat, quests.
*   💬 **Advanced Dialogue:** Implementing player choices and branching conversations.
*   🏘️ **Expanded World:** Customizing the environment further, adding interiors, creating new levels/areas.
*   🤖 **More Complex AI:** Implementing schedules, reactions, potentially Behavior Trees for advanced logic.
*   🎨 **Art & Animation Polish:** Adding more character animations (combat, expressions), improving VFX, refining UI design.
*   🔊 **Audio Expansion:** Adding more sound effects (UI feedback, specific actions), ambient loops, possibly music.
*   💾 **Saving/Loading:** Implementing persistence for player progress.
*   📝 **Full Story Implementation:** Expanding the narrative, adding quests, and fully developing the plot based on the initial premise.

---

## 📜 Assets & Attributions

This project uses freely available assets. Please see the [**ATTRIBUTIONS.md**](ATTRIBUTIONS.md) file for detailed license information and credits for Characters, UI, Sound, and Environment assets used.

---

## ©️ License

This project is licensed under the MIT License. The full license text can be found in the [LICENSE](LICENSE) file in the repository root. 📄
