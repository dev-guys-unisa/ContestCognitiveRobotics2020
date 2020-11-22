# camera_acquisition package
![pow](https://img.shields.io/badge/Powered%20By-dev--guys--unisa-blue)
![ros](https://img.shields.io/badge/ROS%20Version-melodic-orange)

The goal of this package is to manage the aspect related to Pepper's front camera, whether it is image acquisition or showing the video stream.
___
# Package Structure
The executables are contained in the ```src/``` folder which contains the node used to handle with Pepper's camera. The ```msg/``` folder, instead, contains a ```.msg``` file that specifies the type of message supported and managed by the node that takes care of capturing the images when needed.

```bash
~package.xml # Contains info about the package
~CMakeLists.txt # Specifies dependencies and libraries linking
~src/ # Contains the exectuables to be launched
~msg/ # Contains the msg file used
```

#### Executables

* The ```camera_stream``` script takes care of showing the images captured by Pepper's front camera.
* The ```image_acquire``` script takes care of capturing the frame useful for performing object detection on it. It basically communicates with the knot that makes the head move and decides when it's time to capture the image.

#### Messages

* The ```ImageWithPose.msg``` file specifies the type of file that the node must manage, in particular it reports the position (right, left, center) and the image linked to it.

____

##### Group 18