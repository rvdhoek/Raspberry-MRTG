#! /bin/bash
COUNTER=0
for ip in 192.168.178.{1..74}; do
  ping -c 1 -W 1 -t 2 -s 10 $ip > /dev/null 2> /dev/null;
  if [ $? -eq 0 ]; then
    #echo "${ip} is up";
#    arp -n -i eth0 $ip | grep ether >> /tmp/ARPResults
    arp -n -i eth0 $ip | grep ether >> /dev/null
    let COUNTER++
  fi
done
echo $COUNTER
echo $COUNTER
