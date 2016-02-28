#!/bin/bash

function average(){
  count=0
  sum=0
  for x in $1
  do
    sum=$($sum + $x)
    count=$($count + 1)
  done
  echo $($sum / $count)
}

    OUTPUT=$(/usr/bin/ntpq -pn | /usr/bin/awk '{ if ($9 ~ /[0-9]/) print $9};')
    echo "metric ntp_offset int $OUTPUT"
    OUTPUT=${OUTPUT/-/}
    AVG=$(average $OUTPUT)
    echo "metric ntp_offset int $AVG"
    echo "status ok ntp_offset calculated and reported."


