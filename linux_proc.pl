#!/usr/bin/perl -l
open(COMD,"ps -ef | wc -l|");
$num = <COMD>;
close(COMD);
	
print int($num);
print int($num);
