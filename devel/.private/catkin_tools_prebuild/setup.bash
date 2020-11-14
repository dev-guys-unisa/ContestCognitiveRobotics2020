#!/usr/bin/env bash
# generated from catkin/cmake/templates/setup.bash.in

CATKIN_SHELL=bash

# source setup.sh from same directory as this file
_CATKIN_SETUP_DIR=$(builtin cd "`dirname "${BASH_SOURCE[0]}"`" > /dev/null && pwd)
. "$_CATKIN_SETUP_DIR/setup.sh"
export PYTHONPATH=${PYTHONPATH}:$D/lib/python2.7/site-packages
export DYLD_LIBRARY_PATH=${DYLD_LIBRARY_PATH}:$D/lib
