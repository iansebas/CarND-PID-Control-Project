#!/bin/bash
# Script to build all components from scratch, using the maximum available CPU power
#
# Given parameters are passed over to CMake.
# Examples:
#    * ./build_all.sh -DCMAKE_BUILD_TYPE=Debug
#    * ./build_all.sh VERBOSE=1
#
# Written by Tiffany Huang, 12/14/2016
#

cd ~/CarND-PID-Control-Project
# Remove the dedicated output directories
rm -rf build
# We're done!
echo Cleaned up the project!
# Go into the directory where this bash script is contained.
# Compile code.
mkdir -p build
cd build
cmake ..
make -j `nproc` $*

# Run particle filter
cd ~/CarND-PID-Control-Project/build
./pid

