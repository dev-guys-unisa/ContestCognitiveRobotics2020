# ContestCognitiveRobotics2020

![pow](https://img.shields.io/badge/Powered%20By-dev--guys--unisa-blue)
![ros](https://img.shields.io/badge/ROS%20Version-melodic-orange)

Created for the project related to the "Cognitive Robotics" subject at the University of Salerno 

## Setup workspace
Here are some startup operations to perform before starting pepper roslaunch.

##### Setup components
We then get the key and the sdk package from the following links.
```shell
sudo apt-key adv --keyserver 'hkp://keyserver.ubuntu.com:80' --recv-key C1CF6E31E6BADE8868B172B4F42ED6FBAB17C654
sudo apt install -y ros-melodic-octomap ros-melodic-octomap-msgs ros-melodic-rgbd-launch ros-melodic-camera-info-manager-py
```

##### Python NaoQi download
Now you need to download the Python package for NaoQi and export the necessary paths pointing to it.

```shell
wget https://community-static.aldebaran.com/resources/2.5.10/Python%20SDK/pynaoqi-python2.7-2.5.7.1-linux64.tar.gz
tar xf pynaoqi-python2.7-2.5.7.1-linux64.tar.gz
rm pynaoqi-python2.7-2.5.7.1-linux64.tar.gz
D=$(realpath pynaoqi-python2.7-2.5.7.1-linux64)
```

##### ```Setup.bash``` file config
All that remains is to modify the configuration file which will then be launched once the packages contained in src/ have been built.

```shell
echo 'export PYTHONPATH=${PYTHONPATH}:$D/lib/python2.7/site-packages' >> devel/setup.bash
echo 'export DYLD_LIBRARY_PATH=${DYLD_LIBRARY_PATH}:$D/lib' >> devel/setup.bash
```