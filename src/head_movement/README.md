# head_movement package
![pow](https://img.shields.io/badge/Powered%20By-dev--guys--unisa-blue)
![ros](https://img.shields.io/badge/ROS%20Version-melodic-orange)

The goal of this package is to communicate with the topic responsible for joint movement and to make Pepper's head move left and right.
___
# Package Structure
The executables are contained in the ```src/``` folder which contains the node used to make Pepper turn around and look on the left and right side.

```bash
~package.xml # Contains info about the package
~CMakeLists.txt # Specifies dependencies and libraries linking
~src/ # Contains the exectuables to be launched
```

#### Executables

* The ```head_movement``` script deals with communicating with the topic responsible for the movement of the robot joints, in particular with those of the head and by setting the angles and speed it makes possible the movement of Pepper.
____

##### Group 18