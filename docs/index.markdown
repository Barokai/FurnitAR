---
layout: default
---
# FurnitAR - Furniture placement in AR on Android (with Vuforia)

![FunitAR title image](/assets/images/ImageTargets-Furniture-24bit-rgb.png)

## Abstract

Augmented reality aids people with visual effects that relate to the environment of the space and with this concept people can view the furniture in the room without actually moving or placing physical objects in the area. The user interactively chooses material and furniture model and places it in the room without the need to do this manually with a real piece of furniture. This interactive process enables the user to check how a piece of furniture looks in the room, also with different materials used as the models texture.
A system has been developed which allows to choose and rotate models for preview, change the material and place the model textured with the chosen material in life-size on the ground. Thus, the user
can experience different furniture arrangements and share his/her creations via the application

## Introduction

This paper describes technical backgrounds and logic of FurnitAR, which features are implemented, how they work and what can be done for in the future.

## Design

### Requirements and features

**Requirements from course**

- An AR project has to be developed by each person
- The following APIs can be used
  - Unity, Vuforia, ARCore, ARKit
- Additional libraries can as well be added
- Your own code should contain at least 650 LOC (per person)
- Has to be
  - Interactive, real-time, and run on a smart phone, tablet, Magic Leap, HoloLens, no PC based applications – it has to be mobile
- Focus on
  - Interactivity, usability, design, visual quality, stability

**Features**

Based on the given requirements, it has been decided on following features:

Image target 1 (Furniture)

- Previewing models via rotation
- Choosing models via image target

Image target 2 (Material)

- Choosing materials via image target
- When chosen, also model in image target 1 will be updated to use the new material.

Ground plane object placement

- Placing chosen model (with chosen material) on ground plane via plane finder
- Target position visualized by plane indicator

Optional

- Repeat steps done with image targets and ground plane to choose and place other models or the same with different material
- Check your placed models and share a screenshot if wanted

User interface

- Resetting models placed on ground plane
- Showing current price (sum over of all placed models)
- Preview image of chosen material
- Simple steps to do in top bar

**Requirements Hardware**

To detect the ground plane correctly, hardware requirements like ARCore support have to be met. If no compatible device is present, Vuforia provides an target image to emulate ground plane detection. For a list of supported Android devices check ARCore supported devices at [developers.google.com](https://developers.google.com/ar/devices).

### Usage

Install the application with the installation package for Android (Android 8+), see "Download apk" on the left.
To be able to use the application properly, the user has to download and print the image targets which can also been found on the left. Image targets can be printed in gray scale too, but using colored images is recommended.
Start the application, allow the camera to be used and point the camera onto one of the image targets. The targets with pieces of furniture printed on allows the user to choose between different models and allows to rotate them. The model has to be chosen with the middle virtual button to be able to place it later on the ground plane. During this process, the top bar shows hints what has still to be done. When a material has been chosen, also the material of the model previewed on the furniture image target will be updated.
After choosing both, the user can place the model on the ground, where is shown via the plane indicator.
Choosing a model and material can be done again as often as wanted, also placing the chosen model. If wanted, a sharing functionality is built in - can be found in the upper right corner.
When the user wants to start from scratch, the reset button in the middle can be used.

## Implementation

This section covers more in-detail information on how the features were implemented.

### Technical details

As there are many different versions of Unity & Vuforia and the online documentation changes regularly, here are the versions used to create this application. Also the used test device is mentioned because of the previously mentioned ARCore compatibility.

- 2021.3.0f1 Personal
- Visual Studio 2022 Community Edition
- Google Pixel 6 (Android 12)

**About image targets and features**

Vuforia about image targets
> Image Targets represent images that Vuforia Engine can detect and track. The Engine detects and tracks the image by comparing extracted natural features from the camera image against a known target resource database. Once the Image Target is detected, Vuforia Engine will track the image and augment your content. Source: [vuforia.com](https://library.vuforia.com/objects/image-targets).

Based on the best practices available at [vuforia.com](https://library.vuforia.com/objects/best-practices-designing-and-developing-image-based-targets), image targets should be rich in detail, have good contrast, shouldn't have repetitive patterns and have to have a certain format (8- or 24-bit PNG or JPG, must be RGB).

The created image targets don't follow all these practices, therefor their rating is 1 out of 5 and 2 out of 5 in terms of a rating called "Augmentable". This rating is based on the features found in an image, to visualize this, here are some images:

Augmentable rating 1 out of 5
![Image target furniture](/assets/images/ImageTargets-Furniture-Features.png)
Augmentable rating 2 out of 5
![Image target materials](/assets/images/ImageTargets-Material-Features.png)

As long as the lighting conditions are stable (and not too bright or dark) and the user avoids glare and dark shadows, the image target recognition still works. Sometimes it could take longer. Replacing those two targets could be a future improvement. For details on how to improve image targets, check the best practices by [Vuforia](https://library.vuforia.com/objects/best-practices-designing-and-developing-image-based-targets).

### Choosing a model

When the user points the camera on the furniture image target and it has been recognized successfully, the model preview is shown. The user is now able to rotate the shown model (rotation is then used for placing the model on the ground plane, too). Furthermore, the user is able to move to the next or previous model. The shown model is destroyed, but before its scaling and rotation is stored. The chosen model is then instantiated and positioned on the old models position (with the image target still being the parent). After instantiating the new model, the rotation and scale of the old model are applied.
When the model was chosen with the middle virtual button, also its price is stored. The model itself is taken as reference to instantiate a new model on top of the ground plane (used later).

**Rotating the model**

When the users hovers the rotation virtual buttons on lower left and right of the image target, the model rotates in the chosen directions. These actions make use of Unity's built in Rotate method and shorthand writings for rotating Vectors back and forth.

Code example for rotating left on the image target:

```c
currentModel.transform.Rotate(
Vector3.back * rotationSpeed * Time.deltaTime);
```

This line shows how rotation of the currently visible model on the image target can be done with just a single line of code.
The current rotation set when choosing the model is then taken as reference to instantiate a new model on top of the ground plane as mentioned before.

### Choosing material

Choosing the material works very similar to Choosing a model. In comparison to it, it just uses a single model (a Unity model called Quad) which is always the same. When the user moves to the next or previous material, the Quads material reflects the currently chosen material. The Quad works as a preview how the material will look like. When the model was chosen with the middle virtual button, also its price is stored.

### Connection between model and material

When a material has been chosen on image target 2, the material on the model placed on the furniture target is updated immediately. This can be easily check when both image targets are visible in the device camera.

### Detecting ground plane and placing models

Vuforia Ground Plane enables digital content to be placed on horizontal surfaces in the environment, such as floors and tabletops. It supports the detection and tracking of horizontal surfaces, and also enables you to place content in mid-air using  [Anchor Points (vuforia.com)](https://library.vuforia.com/environments/ground-plane).
FurnitAR makes use of the detection of horizontal surfaces to place models to anchor points.
When a model and material has been chosen, the user is able to place it on the ground plane, target location is indicated by a plane indicator. Placing the model is done by touching the screen.
Rotation of the placed model was set before based on the chosen model from image target 2. Mind that the rotation is dependent on the location and rotation of the device in the world space.

**Resetting the ground plane**

Every model placed on the ground plane clones the ground plane and the model on it - the plane is the parent object. The user is able to reset all placed model by touching the reset button. When touched, all GameObjects tagged with "GroundPlaneTag" are found and all besides the first are destroyed. This also resets the instruction hints on the top bar, also chosen model, chosen material and costs.

### User interaction besides targets and ground plane

Besides the previously mentioned reset functionality, the user is also able to create a screenshot and share it directly with Androids built-in share functionality. This is triggered by touching the share button on the upper right corner.

## Future work and ideas

Following additional features and ideas could be worked on in the future

- Improving image target quality.
- New image targets for separate categories of furniture like chairs, sofas, tables, vase and so on.
- Overview of costs per placed model including screenshot.
- 2D preview of the currently selected model (like material preview on the lower right corner) or transparent model shown on plane indicator.
- Portrait mode, currently application just works in landscape mode.
- Making use of .editorconfig to ensure coding style and code quality.
- Building and testing on other platforms like Apple iPhone.

## Conclusion

Augmented reality is becoming more common in real life. Unity 3D and some AR development platforms like Vuforia provide possibilities for developers to create applications and implement features to apply augmented reality to more and more applications and realizing ideas with it. The application proposed in this paper allows users to view and customize furniture models in real time. The main advantage of this application is that it saves the users time and reduces costs when it comes to furniture planning.

## Acknowledgments

The author wish to thank Christina Knittl-Frank for the initial idea and feature suggestions, also Mr. Anthes for support and introduction into the topic.

**Huge thanks to**

<https://assetstore.unity.com/packages/3d/props/furniture/big-furniture-pack-7717>

&

<https://agrawalsuneet.github.io/blogs/native-android-image-sharing-in-unity-using-fileprovider/>
