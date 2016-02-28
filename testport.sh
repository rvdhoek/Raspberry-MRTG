#!/bin/sh
TESTIP=$1

#check if symlink exists
if [ "$1" = "" ]; then
 echo "Test TCP port required"
 exit 1
fi

TESTIP=$(dig +short myip.opendns.com @resolver1.opendns.com)
#nc -w 1 $TESTIP $1 
nc -n -z -w 1 $TESTIP $1 > /dev/null
 if [ $? -eq 0 ]; then
#Succes
     echo "1"
     echo "1"
 else
#No succes
     echo "0"
     echo "0"
 fi
