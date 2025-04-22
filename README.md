# Mimar - Mixed Reality Anatomy Learning App

**Mimar** is a Mixed Reality (MR) application developed using **Unreal Engine 5.5.4**, designed to offer an interactive and intuitive way to explore human anatomy. Created with **Meta Quest 3** in mind, Mimar allows users to grab, manipulate, and examine anatomical structures in 3D space using both single- and dual-hand interactions.

> ⚠️ This project is no longer actively developed in Unreal Engine. I’ve decided to continue the development of *Mimar* in Unity due to recent updates and improved MR support on that platform. Still, this version marks an important milestone, and I wanted to share a working build and open-source code for archival and inspiration purposes.

---

## 🚀 Features

- **Anatomy Exploration** 🧠💀🫀  
  - Interact with anatomical structures like **organs, skeleton, muscles, and the circulatory system** in a mixed reality environment.  
  - 3D floating labels display the names of bones and structures when hovered over.

- **Advanced Grab System** ✋  
  - **Single-hand grabbing** for picking up and examining objects.  
  - **Two-hand grabbing** allows users to **scale and rotate** the object in space.  
  - **Remote grabbing** using a **Niagara beam pointer**, with responsive visual and text feedback when targeting objects.

- **Mini Tutorial (WIP)** 📖  
  - A simple tutorial system introduces players to both close-range and remote grab interactions at the start.

- **Dynamic Spawning System** 🧪  
  - Users can spawn alternative models from the side panel interface to explore different structures.

- **Custom VFX & SFX** 🎧✨  
  - Visual effects were created using **Unreal’s Niagara system**.  
  - All sound effects were self-produced using **Vital Synth** and **Reaper DAW**.

---

## 🔧 Technologies Used

- **Unreal Engine 5.5.3**  
- **MetaXR v74.1**  
- **Meta Quest 3**  
- **Niagara VFX**  
- **Vital Synth**
- **Reaper DAW**

---

## 📌 Development Progress

✅ MR environment setup  
✅ One-hand grab system  
✅ Two-hand grab & transform scaling  
✅ Remote grab with beam 
✅ Labeling hovered/grabbed objects 
✅ Custom sound & visual effects  
🚫 Tutorial and UI implementation (cut for this release)
🚫 3D widget model spawner (cut for this release)
🚫 Puzzle mechanics (cut for this release)

---

## 📦 About This Release

This is the first and final Unreal Engine version of *Mimar*. All copyrighted meshes have been removed, but you can add any mesh you want in any blueprint(just tweak the collision settings).
The project is provided both as an APK and open-source code for educational and archival purposes.  
Repository name has been changed to `Mimar-Unreal`, and future development will continue in the Unity-based `Mimar` repository.

---

## 🎯 Vision

*Mimar* started as a vision to bring anatomy education into a mixed reality space — where students don’t just *see* anatomical structures, but *touch*, *move*, and *understand* them spatially. Although my main focus has been on anatomy development, this project will serve as a foundational template for other mixed reality applications, incorporating core principles that will lay the groundwork for future ventures in the field.

This Unreal Engine version was a critical prototype in that journey. While I’m moving forward in Unity, this milestone marks a “first step” worth sharing.
