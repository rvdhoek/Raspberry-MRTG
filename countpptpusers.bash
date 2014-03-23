#!/bin/sh
J=`netstat -tn | grep ':1723' | wc -l`

if [ $J != 0 ];
then
{
HOSTNAME=$(hostname)
TODAY=$(date)
echo "Date: $TODAY                     Host:$HOSTNAME             PPTP user count:$J" >> /var/log/pptpd_usercount.log
echo `netstat -tn | grep ':1723'` >> /var/log/pptpd_usercount.log
}

fi

echo $J




