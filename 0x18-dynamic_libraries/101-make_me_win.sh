#!/bin/bash
wget -P /tmp https://github.com/Brightlink01/alx-low_level_programming/raw/master/0x18-dynamic_libraries/wining.so
export LD_PRELOAD=/tmp/wining.so
