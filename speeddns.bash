#!/bin/bash
for i in {1..5}; do dig heystephenwood.com | grep time; sleep 1; done | awk /time/'{sum+=$4} END { print sum/NR}'
