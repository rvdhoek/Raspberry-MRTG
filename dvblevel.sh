#!/bin/sh

MC="/opt/bin/mediaclient"
#check if symlink exists
if [ -z "$1" ]; then
echo "Error: No frequency input"
exit 1
fi

SGNGOOD=`$MC -m DVBC -f $1 -M Q256 -S 6900000`
OUTPUT=0
if [[ $SGNGOOD == *"[LOCKED]"* ]]; then

DATA=`$MC --readsignal=1 -d /dev/dvb/adapter0/frontend0`
LOSS=`echo $DATA | awk -F/ '{print $4 }'`
#echo $DATA

LOCATION=`echo "$DATA" | grep -bo "%)" | sed 's/:.*$//'`
OUTPUT=`echo "$DATA" |cut -f1 -d "%"| tail -c 3`

fi
echo $OUTPUT
echo $OUTPUT




