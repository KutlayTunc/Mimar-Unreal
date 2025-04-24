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
![PinchGrab1](https://github.com/user-attachments/assets/8e50ab12-1f4a-441b-856f-26ed09c93a50)          
✅ Two-hand grab & transform scaling      
![TwoGrabTransform](https://github.com/user-attachments/assets/e27809ee-d700-4182-ae61-5c97f7598658)      
✅ Labeling hovered objects         
![BeamPointer1](https://github.com/user-attachments/assets/64695c22-e855-488e-bbae-c211838e0852)      
✅ Remote grab with beam            
![BeamLabels](https://github.com/user-attachments/assets/5171466d-2b69-42f1-ad92-3c07eda0ed61)        
✅ Custom sound & visual effects    
*beep boop*          

🚫 Tutorial and UI implementation (cut for this release)   
🚫 3D widget model spawner (cut for this release)   
🚫 Puzzle mechanics (cut for this release)   

---     

## 📦 About This Release

This is the first and final Unreal Engine version of *Mimar*. All copyrighted meshes have been removed, but you can add any mesh you want in any blueprint (just tweak the collision settings).
The project is provided both as an APK and open-source code for educational and archival purposes. I attempted to implement quaternion-based rotation, but was not satisfied with the performance. Please note that you need to recompile the project in order to open it due to the C++ script.  

Repository name has been changed to `Mimar-Unreal`, and future development will continue in the Unity-based `Mimar` repository.

---

## 🎯 Vision

*Mimar* started as a vision to bring anatomy education into a mixed reality space — where students don’t just *see* anatomical structures, but *touch*, *move*, and *understand* them spatially. Although my main focus has been on anatomy development, this project will serve as a foundational template for other mixed reality applications, incorporating core principles that will lay the groundwork for future ventures in the field.

This Unreal Engine version was a critical prototype in that journey. While I’m moving forward in Unity, this milestone marks a “first step” worth sharing.


---

📺 **For updates and video demo:**  
🔗 [YouTube Channel](https://www.youtube.com/@kutlaytunc)  
🎞️ [Watch the Demo Video](https://youtu.be/slrKiEo-YX8)

--- 
