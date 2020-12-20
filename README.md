# Pepper Object Detection - Cognitive Robotics Project Work
![pow](https://img.shields.io/badge/Powered%20By-dev--guys--unisa-blue)
![ros](https://img.shields.io/badge/ROS%20Version-melodic-orange)

This is a repository created for the *project work* related to the "Cognitive Robotics" subject at the University of Salerno.
___
# Group Members

![Alt text](https://github.com/dev-guys-unisa/ContestCognitiveRobotics2020/blob/main/utils/Logo.png?raw=true "Optional title")

* Salvatore Ventre
* Vincenzo Russomanno
* Giovanni Puzo
* Vittorio Fina
___
# Problem Description
Implement a [ROS](https://wiki.ros.org) architecture that makes [Pepper](http://doc.aldebaran.com/2-5/home_pepper.html) able to *recognize the objects* inside a scene and to describe the scene itself, by listing the different objects it has seen. The goal is, therefore, to make the robot able to look around, perform object detection and say aloud what it has managed to recognize.

#### Software Requirements
This task is made relying on the [ROS (Robot Operating System)](https://wiki.ros.org) library, in particular the *melodic* distro.

#### Project Architecture
The implemented [ROS](https://wiki.ros.org) architecture was designed to have 4 fundamental nodes to carry out the assigned task:
* [Node 1](https://github.com/dev-guys-unisa/ContestCognitiveRobotics2020/tree/main/src/camera_acquisition): Pepper has to acquire the stream from its camera.
* [Node 2](https://github.com/dev-guys-unisa/ContestCognitiveRobotics2020/tree/main/src/head_movement): Pepper moves his head in three different position (front, right and left).
* [Node 3](https://github.com/dev-guys-unisa/ContestCognitiveRobotics2020/tree/main/src/pepper_detector): Object Recognition Module.
* [Node 4](https://github.com/dev-guys-unisa/ContestCognitiveRobotics2020/tree/main/src/animated_say): Pepper says what it saw, specifying where it saw what.

#### Object Detection & Recognition
We have chosen to use one of the pre-trained models on [COCO Dataset](https://cocodataset.org/#home), available to perform operations of this type. Among all those available [here](https://github.com/tensorflow/models/blob/master/research/object_detection/g3doc/tf2_detection_zoo.md) we have chosen the one that could seem the most performing, compromising with the processing time and the score in terms of COCO mAP.
In the end, the model chosen was the ```efficientdet_d1_coco17_tpu-32``` . Below we can see the details of the model:

Model name | Speed (ms) | COCO mAP | Outputs
---------- | :--------: | :----------: | :-----:
[efficientdet_d1_coco17_tpu-32](http://download.tensorflow.org/models/object_detection/tf2/20200711/efficientdet_d1_coco17_tpu-32.tar.gz) | 54 | 38.4 | Boxes
___

# Getting Started 
To be able to use this architecture it is necessary to have the Python ```pynaoqi``` libraries available by running some simple commands from the terminal. Here are some startup operations to perform, before starting pepper roslaunch.

#### Python NaoQi Download & Setup
We get the *key* and the *sdk package* from the following links.
```shell
sudo apt-key adv --keyserver 'hkp://keyserver.ubuntu.com:80' --recv-key C1CF6E31E6BADE8868B172B4F42ED6FBAB17C654
sudo apt install -y ros-melodic-octomap ros-melodic-octomap-msgs ros-melodic-rgbd-launch ros-melodic-camera-info-manager-py
```
Now we can download the libraries needed to connect to Pepper in our workspace. So we need to download the Python package for *NaoQi* and export the necessary paths pointing to it.
```shell
cd ~ # Go to the home directory
wget https://community-static.aldebaran.com/resources/2.5.10/Python%20SDK/pynaoqi-python2.7-2.5.7.1-linux64.tar.gz
tar xf pynaoqi-python2.7-2.5.7.1-linux64.tar.gz
rm pynaoqi-python2.7-2.5.7.1-linux64.tar.gz
D=$(realpath pynaoqi-python2.7-2.5.7.1-linux64)
```
This operation allow us to use the [*PyNaoQi SDK*](http://doc.aldebaran.com/2-5/dev/python/index.html) to develop the nodes.
___
# How to launch a Demo
Here are some fundamental indications to launch a demo of the developed architecture.
#### Clone & Build the Repository
First of all it is necessary to clone the repository and the advice is to do it in the home directory, by running these commands:
```bash
cd ~
git clone https://github.com/dev-guys-unisa/ContestCognitiveRobotics2020
```
At this point the workspace must be compiled before it can be launched using these commands:
```bash
cd ~/ContestCognitiveRobotics2020
catkin build
```

#### Config file setup
The compiler will do its job correctly and it will therefore be necessary to modify the ```setup.bash``` file before you can start Pepper bringup. This can be done by launching the two commands from the terminal, making sure that the temporary variable ```$D``` is correctly set and points to the previously downloaded ```pynaoqi``` package:
```shell
cd ~/ContestCognitiveRobotics2020
echo 'export PYTHONPATH=${PYTHONPATH}:$D/lib/python2.7/site-packages' >> devel/setup.bash
echo 'export DYLD_LIBRARY_PATH=${DYLD_LIBRARY_PATH}:$D/lib' >> devel/setup.bash
source devel/setup.bash
```
*Recall that it is necessary to link these two variables to the downloaded NaoQi SDK.*

#### Pepper Launch

Now it is possible to launch a live demo to see Pepper's behavior live. To make things easier to run, we have decided to integrate the ```pepper_bringup``` command into a launch file built for our purpose so as to avoid endlessly opening and spawning terminal windows. The only thing to do, in fact, is to run the following command:
```shell
roslaunch pepper_launch pepper.launch pip:=*ipaddress* nao_ip:=*ipaddress*
```
As described in the related launch package this command will take care of launching all the nodes needed to run the demo without problems. Then every node foreseen by the architecture described above will be called.

*Be Careful: Instead of ```*ipaddress*``` enter Pepper's ip address.*

*Hint: use the tab key to auto-complete commands*
___
##### Group 18