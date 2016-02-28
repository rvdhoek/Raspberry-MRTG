#!/bin/bash

#check if symlink exists
if [ "$1" = "" ]; then
  URL="127.0.0.1"
else
 URL=$1
fi


OUTPUT=`for i in {1..5}; do dig heystephenwood.com " @"$URL| grep time; sleep 1; done | awk /time/'{sum+=$4} END { print sum/NR}'`
echo $OUTPUT
echo $OUTPUT

