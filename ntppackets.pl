#!/usr/bin/perl
use strict;

#### Options ####
my $uptimeprog = '/usr/bin/uptime';    # Set to program to give system uptime
my $hostnameprog = '/bin/hostname';    # Set to program to give system hostname

##### Nothing below here should have to be changed #####

# Clear path and get uptime
delete $ENV{PATH};
delete $ENV{BASH_ENV};
my $uptime = `$uptimeprog`;
chomp($uptime);
$uptime=substr($uptime,12);
my $hostname = `$hostnameprog`;
chomp($hostname);

my $received = 0;
my $sent = 0;
my $status = `/usr/bin/ntpdc -c iostats`;
if($status =~ m!received packets:\s*(-?\d+)!) {
     $received=$1 + 2147483648;
}
if($status =~ m!packets sent:\s*(-?\d+)!) {
     $sent=$1 + 2147483648;
}

print "$received\n$sent\n$uptime\n$hostname\n";

