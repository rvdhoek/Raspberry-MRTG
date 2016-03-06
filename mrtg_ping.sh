#!/bin/sh
PING="/bin/ping"
#check if symlink exists
if [ $1 = "" ]; then
echo "Error: No ip input"
exit 1
fi
DATA=`$PING -c3 -s500 $1 -q `
LOSS=`echo $DATA | awk '{print $18 }' | tr -d %`
echo $LOSS

if [ $LOSS = 100 ]; then
{
HOSTNAME=$(hostname)
echo "0"
#echo "Something wrong with the server: $1" | mail -s "Something wrong with the server: $1" namek@gmail.com
TODAY=$(date)
echo "Date: $TODAY My host:$HOSTNAME IP:$1 " >> /var/log/mrtg_ping.log
}
else
echo $DATA | awk -F/ '{print $5 }'
fi

