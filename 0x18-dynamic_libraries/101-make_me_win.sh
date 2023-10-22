#!/bin/bash
wget -qP /tmp/ https://github.com/Tshegofatso-Tswai/alx-low_level_programming/raw/master/0x18-dynamic_libraries/100-operations.so
export LD_PRELOAD="./100-operations.so"
./gm 9 8 10 24 75 9
