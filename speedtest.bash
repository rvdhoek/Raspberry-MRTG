#!/bin/bash
#Ramdisk size
RamdiskSize=2M

#check if symlink exists
if [ "$1" = "" ]; then
  echo "Error: No url input"
  exit 1
fi

# FILEs
DownloadFile=/var/tmp
URL=$1
#https://androidnetworktester.googlecode.com/files/1mb.txt
#https://www.drupal.org/files/issues/1mb.txt
if [ ! -e $DownloadFile ]; then 
mkdir $DownloadFile 
fi

# Ramdisk Stuff
mount -t tmpfs -o size=$RamdiskSize tmpfs $DownloadFile > /dev/null
sleep 2
cd $DownloadFile
TimeFile1=$(date +%s%6N)
#wget -q -4 --no-dns-cache --no-cookies --no-cache $1  -O "$DownloadFile/file.txt" 
Tijd=`curl -so /dev/null  -w '%{time_total}' $1`
TimeFile2=$(date +%s%6N)
cd /
umount $DownloadFile  >> /dev/null
#let Tijd='TimeFile2-TimeFile1'
#echo $Tijd
echo "$Tijd * 1000000" | bc ;
echo "$Tijd * 1000000" | bc ;

