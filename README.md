# ContestCognitiveRobotics2020
![pow](https://img.shields.io/badge/Powered%20By-dev--guys--unisa-blue)
![ros](https://img.shields.io/badge/ROS%20Version-melodic-orange)

This is a repository created for the *mid-term project work* related to the "Cognitive Robotics" subject at the University of Salerno.
___
# The Task
Pepper will be able to *recognize the objects* inside the scene and to describe the scene itself, by listing the different objects it has seen.

#### Software Requirements
This task is made relying on the [ROS (Robot Operating System)](https://wiki.ros.org) library, in particular the *melodic* distro.

#### Project Architecture
The [ROS](https://wiki.ros.org) architecture has to include several nodes:
* Node 1: Pepper has to acquire the stream from its camera.
* Node 2: Pepper moves his head in three different position (front, right and left).
* Node 3: Object Recognition Module.
* Node 4: Pepper says what it saw, specifying where it saw what.

#### Object Detection & Recognition
We integrate a detector already pretrained over the [COCO Dataset](https://cocodataset.org/#home).
___
## Setup workspace
Here are some startup operations to perform before starting pepper roslaunch.

#### Setup components
We then get the key and the sdk package from the following links.
```shell
sudo apt-key adv --keyserver 'hkp://keyserver.ubuntu.com:80' --recv-key C1CF6E31E6BADE8868B172B4F42ED6FBAB17C654
sudo apt install -y ros-melodic-octomap ros-melodic-octomap-msgs ros-melodic-rgbd-launch ros-melodic-camera-info-manager-py
```

#### Python NaoQi download
Now you need to download the Python package for NaoQi and export the necessary paths pointing to it.

```shell
wget https://community-static.aldebaran.com/resources/2.5.10/Python%20SDK/pynaoqi-python2.7-2.5.7.1-linux64.tar.gz
tar xf pynaoqi-python2.7-2.5.7.1-linux64.tar.gz
rm pynaoqi-python2.7-2.5.7.1-linux64.tar.gz
D=$(realpath pynaoqi-python2.7-2.5.7.1-linux64)
```

This operation allow us to use the PyNaoQi library to develop the nodes.


#### ```devel/setup.bash``` file config
All that remains is to modify the configuration file which will then be launched once the packages contained in src/ have been built.

```shell
echo 'export PYTHONPATH=${PYTHONPATH}:$D/lib/python2.7/site-packages' >> devel/setup.bash
echo 'export DYLD_LIBRARY_PATH=${DYLD_LIBRARY_PATH}:$D/lib' >> devel/setup.bash
```

# Pepper Bringup
In order to connect Pepper to our architecture we need to launch this command:
```shell
roslaunch pepper_bringup pepper_full_py.launch nao_ip:=*ipaddress*
```