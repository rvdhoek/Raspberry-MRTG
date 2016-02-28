#!/bin/bash
CPU=`uptime | sed 's/.*load average: //' | awk -F\, '{print $1}'`
echo "$CPU * 100" | bc ;
echo "$CPU * 100" | bc ;

