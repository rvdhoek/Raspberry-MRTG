#!/usr/bin/perl
open(COMD,"ps -ef | wc -l|");
$num = <COMD>;
close(COMD);
	
print int($num);
