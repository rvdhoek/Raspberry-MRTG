#!/bin/sh
l=`grep ESTABLISHED /proc/net/ip_conntrack | wc -l`
echo $l

