#!/usr/bin/perl
open(COMD,"w | grep -v load | grep -v USER | wc -l|");
$num = <COMD>;
close(COMD);
	
print int($num);
