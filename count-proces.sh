#!/bin/sh
awk </proc/loadavg '{split($4,A,/\//) ; print A[1] "\n" A[2]}'


