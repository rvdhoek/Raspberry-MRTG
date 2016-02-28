#!/bin/sh
OUTPUT=`/sbin/iwlist scan 2>/dev/null | grep Cell | wc -l`
echo $OUTPUT
echo $OUTPUT
