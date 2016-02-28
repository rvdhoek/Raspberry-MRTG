#!/bin/sh
l=$(netstat -anp | grep ESTABLISHED | wc -l)
echo $l
echo $l

