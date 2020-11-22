# pepper_detector package
![pow](https://img.shields.io/badge/Powered%20By-dev--guys--unisa-blue)
![ros](https://img.shields.io/badge/ROS%20Version-melodic-orange)

The goal of this package is to perform object detection on received images and return the result as a return value.
___
# Package Structure
The executables are contained in the ```src/``` folder which contains the node used to handle with Object Detection. The ```msg/``` folder, instead, contains a ```.msg``` file that specifies the type of message supported and managed by the node that takes care of sending the objects detected.

```bash
~package.xml # Contains info about the package
~CMakeLists.txt # Specifies dependencies and libraries linking
~src/ # Contains the exectuables to be launched
~msg/ # Contains the msg file used
```

#### Executables

* The ```detector_node``` script takes care of receiving the image by subscribing to the related topic and performing an object detection on it according to the model present in the ```src/``` folder to then manage a custom message, which is DetectionWithPose, and publish it on the topic ```/pepper_detective```.

#### Messages

* The ```DetectionWithPose.msg``` file describes and defines the type of message handled by this node for object detection.

____

##### Group 18