# pepper_launch package
![pow](https://img.shields.io/badge/Powered%20By-dev--guys--unisa-blue)
![ros](https://img.shields.io/badge/ROS%20Version-melodic-orange)

This package deals with the implementation of the launch files for carrying out the required task.
___

# Package Structure
The launch files are contained in the ```launch/``` folder and specify the nodes that are called when that particular file is launched with the ```roslaunch``` command.

```bash
~package.xml # Contains info about the package
~CMakeLists.txt # Specifies dependencies and libraries linking
~launch/ # Contains all the launch files written
```

#### Launch file

* The ```pepper.launch``` script takes care of launching, among other things, the roscore if it is not already started. It also starts the nodes necessary to carry out the required task, that is the node for the movement of the head, for the speech and for the object detection in addition to that for the acquisition of images.

____

##### Group 18