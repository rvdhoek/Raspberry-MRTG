#!/bin/bash
#solidshellsecurity.com
#Count number of unique IPs in an Access Log
FILE=/var/log/apache2/access.log.1;
 for ip in $(cat $FILE |cut -d ' ' -f 1 |sort |uniq);
 do { COUNT=$(grep ^$ip $FILE |wc -l);
 if [[ "$COUNT" -gt "10" ]]; then echo "$COUNT:   $ip";
 fi }; done
