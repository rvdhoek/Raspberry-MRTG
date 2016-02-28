#!/bin/sh
l=`grep -E 'BREAK-IN|Invalid|Failed|refused|su|Illegal' /var/log/auth.log* | wc -l`
echo $l
echo $l

