#!/bin/sh
O=$(/bin/ps wwwax | grep "$1" | grep -v grep | wc -l)
echo $O
echo $O

