#!/bin/bash

cd /tmp

wget https://cmake.org/files/v3.7/cmake-3.7.1.tar.gz

tar xf cmake-3.7.1.tar.gz

cd cmake

cmake .

make

make install