#!/bin/bash
# test DNS forward- and reverse-mapping#
# edit this variable to reflect local class C subnet(s)
#NETS="192.168.1 192.168.2 192.168.3"

NETS="192.168.1"
COUNTER=0

for NET in $NETS; do
for n in $(seq 1 254); do

A=${NET}.${n}
HOST=$(dig -x $A +short)

if test -n "$HOST"; then
ADDR=$(dig $HOST +short)

if test "$A" = "$ADDR"; then
#ip found
let COUNTER++
 fi
fi
done
done
echo $COUNTER
