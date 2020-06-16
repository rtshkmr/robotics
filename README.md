last updated Tue Jun 16 11:42:36 +08 2020

# Simulation for Robotics
summer 2020 ARC simulations for nvidia's isaac_sdk. This document serves as a basic installation/quickstart guide.
The relevant commands have been extracted out, please follow the links provided for further reading if required.

- [Simulation for Robotics](#simulation-for-robotics)
  - [Motivation](#motivation)
    - [System Requirements](#system-requirements)
    - [Isaac & Isaac Sim SDK](#isaac--isaac-sim-sdk)
    - [Simulation Environment: UnityHub and Unity 3D](#simulation-environment-unityhub-and-unity-3d)
    - [Troubleshooting Tips/Hacks](#troubleshooting-tipshacks)
  - [B: Testing Your Setup](#b-testing-your-setup)
  - [C: Basic Workflow](#c-basic-workflow)
    - [1. Running Scenes in Play/Build Mode](#1-running-scenes-in-playbuild-mode)
    - [2. Editing 3D Scenes in Unity Editor](#2-editing-3d-scenes-in-unity-editor)
  - [D: Codelets and Apps](#d-codelets-and-apps)
    - [IsaacSight Related](#isaacsight-related)
    - [Setting up Virtual Gamepad](#setting-up-virtual-gamepad)
    - [Segmentation Training](#segmentation-training)
  - [E: Collaboration Tools](#e-collaboration-tools)
    - [Unity's Collab Features](#unitys-collab-features)
    - [Making/Modifying Assets](#makingmodifying-assets)
      - [Sources For Assets](#sources-for-assets)
      - [MapsSDK](#mapssdk)
      - [EasyRoads3D](#easyroads3d)
      - [other smol stuff](#other-smol-stuff)
  - [F: Changelog](#f-changelog)
  - [G: Todos](#g-todos)



## Motivation

The training of models benefits from simulations. We are able to generate unlimited data for the training of these models,
and have them all labelled in detail. Furthermore, we are able to randomise the light, materials, textures and colour of
our simulated objects. These should allow us to train and test our robots in a safe and controlled environment.
  
### System Requirements
* Ubuntu 18.04 LTS
* GPU with [compute capability](https://developer.nvidia.com/cuda-gpus) of 3.5 or higher

### [Isaac & Isaac Sim SDK](https://docs.nvidia.com/isaac/isaac/doc/setup.html#setup-isaac)
1. [Download](https://developer.nvidia.com/isaac/downloads) Isaac SDK 2020.1 and Isaac Sim (for Navigation) 2020.1, then extract the files to your home folder. (~/isaac and ~/isaac_sim_unity3d respectively)
2. Ensure current version of NVIDIA GPU driver is version 440. To install, run the following commands in terminal
```
sudo add-apt-repository ppa:graphics-drivers/ppa
sudo apt-get update
sudo apt-get install nvidia-driver-440
```
3. From the root folder of Isaac SDK, run the dependency script. This will install the required dependecies
```
bob@desktop:~/isaac$ engine/build/scripts/install_dependencies.sh
```

### Simulation Environment: UnityHub and Unity 3D
1. Download [UnityHub AppImage](https://unity3d.com/get-unity/download)
2. Give the AppImage executable permissions. In terminal, navigate to the folder containing UnityHub.AppImage and run the following command.
```
chmod +x UnityHub.AppImage
```
3. To open UnityHub, run the executable in terminal
```
./UnityHub.AppImage
```
4. Sign in to Unity Hub and activate personal or pro licence. Pro licence is available as part of the [github student developer pack](https://education.github.com/pack)
5. Run the following command in terminal to install Unity 2019.3.0f6 (no additional modules required).
```
./UnityHub.AppImage unityhub://2019.3.0f6/27ab2135bccf
```

### Troubleshooting Tips/Hacks
- Unable to build isaac app
  - Bazel version has to be 2.x. To check, run the following command in terminal. Running the dependency script again should fix this.
  ```
  bazel --version
  ```
- Cuda package's version has to be specifically 10.0, be careful when running `sudo apt update && upgrade` on your packages as this may upgrade cuda to a newer version. To check current version of Cuda, run the following command in terminal
```
cat /usr/local/cuda/version.txt
```

- have to install Unity Hub for unity projects management.

## B: Testing Your Setup

## C: Basic Workflow

### 1. Running Scenes in Play/Build Mode

### 2. Editing 3D Scenes in Unity Editor

## D: Codelets and Apps

### IsaacSight Related

### Setting up Virtual Gamepad

### Segmentation Training

## E: Collaboration Tools 

### Unity's Collab Features

### Making/Modifying Assets 

#### Sources For Assets

#### MapsSDK

#### EasyRoads3D

#### other smol stuff

## F: Changelog

## G: Todos

* [Establishing a ROS Bridge](https://docs.nvidia.com/isaac/isaac/packages/ros_bridge/doc/ros_bridge.html)

* [map creation in unity](https://docs.mapbox.com/help/tutorials/create-a-map-in-unity/)

* [NVIDIA Omniverse](https://developer.nvidia.com/nvidia-omniverse-platform)

