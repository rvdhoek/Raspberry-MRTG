#!/bin/sh
l=$(grep -E 'Accepted' /var/log/auth.log* | wc -l)
echo $l
echo $l







