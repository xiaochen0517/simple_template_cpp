#!/bin/bash

set -e

g++ -o main main.cpp -I./raylib-5.5_linux_amd64/include -L./raylib-5.5_linux_amd64/lib -lraylib

LD_LIBRARY_PATH=./raylib-5.5_linux_amd64/lib:$LD_LIBRARY_PATH ./main
