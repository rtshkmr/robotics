last updated Tue Jun 16 11:42:36 +08 2020

# Simulation for Robotics
summer 2020 ARC simulations for nvidia's isaac_sdk. This document serves as a basic installation/quickstart guide.
The relevant commands have been extracted out, please follow the links provided for further reading if required.

- [Simulation for Robotics](#simulation-for-robotics)
  - [Motivation](#motivation)
  - [A: Basic Installations and Account Setup](#a-basic-installations-and-account-setup)
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


## A: Basic Installations and Account Setup

First, set up an [NVIDIA dev account](https://developer.nvidia.com/developer-program) and from the [downloads](https://developer.nvidia.com/isaac/downloads), IsaacSDK 2020.1 and Isaac Sim (for Navigation) 2020.1. 

The SDK includes various apps while the Sim has Unity3D plugins and assets within it that are relevant to our simulations (e.g. Carter robot).


### Troubleshooting Tips/Hacks
- the cuda package's version has to be specifically 10.0, running `sudo apt update && upgrade` on your packages will upgrade that and throw error.

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

