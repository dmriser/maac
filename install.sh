#!/bin/bash 

scons 

cp lib/*           $ANALYSIS_PATH/lib
cp source/base/*.h $ANALYSIS_PATH/include 