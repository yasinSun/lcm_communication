#!/bin/bash
rm -r bin
rm -r build
mkdir bin
mkdir build
cd build
cmake ../
make
exit 0
