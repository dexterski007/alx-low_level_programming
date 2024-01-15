#!/bin/bash
wget -P /tmp https://raw.githubusercontent.com/dexterski007/alx-low_level_programming/main/0x18-dynamic_libraries/success.so
export LD_PRELOAD=/tmp/success.so
