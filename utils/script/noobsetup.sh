#!/bin/bash
echo Hi noob, you are running $0
sudo apt-key adv --keyserver 'hkp://keyserver.ubuntu.com:80' --recv-key C1CF6E31E6BADE8868B172B4F42ED6FBAB17C654
sudo apt install -y ros-melodic-octomap ros-melodic-octomap-msgs ros-melodic-rgbd-launch ros-melodic-camera-info-manager-py
cd ~ # Go to the home directory
wget https://community-static.aldebaran.com/resources/2.5.10/Python%20SDK/pynaoqi-python2.7-2.5.7.1-linux64.tar.gz
tar xf pynaoqi-python2.7-2.5.7.1-linux64.tar.gz
rm pynaoqi-python2.7-2.5.7.1-linux64.tar.gz
D=$(realpath pynaoqi-python2.7-2.5.7.1-linux64)
echo $D

cd ~/ContestCognitiveRobotics2020 && catkin build
cd ~/ContestCognitiveRobotics2020 && echo 'export PYTHONPATH=${PYTHONPATH}:$D/lib/python2.7/site-packages' >> devel/setup.bash
cd ~/ContestCognitiveRobotics2020 && echo 'export DYLD_LIBRARY_PATH=${DYLD_LIBRARY_PATH}:$D/lib' >> devel/setup.bash
echo "You're done !"