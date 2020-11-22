# animated_say package

![pow](https://img.shields.io/badge/Powered%20By-dev--guys--unisa-blue)
![ros](https://img.shields.io/badge/ROS%20Version-melodic-orange)

The goal of this package is to create a node that can manage Pepper's speech by capturing the detections made by the model and saying what it was able to see.
___

# Package Structure
The executables are contained in the ```src/``` folder which contains the two nodes used to make Pepper speak both while waiting for it to recognize objects and when it needs to mention them.

```bash
~package.xml # Contains info about the package
~CMakeLists.txt # Specifies dependencies and libraries linking
~src/ # Contains the exectuables to be launched
```

#### Executables

* The ```object_say``` script takes care of generating the final sentence after performing object detection.
* The ```wait_say``` script takes care of sending pre-established sentences to Pepper to say while waiting for the images to be loaded and for the inference on them.

*The animations are taken from [here](http://doc.aldebaran.com/2-1/naoqi/audio/alanimatedspeech_advanced.html)*
____

##### Group 18
