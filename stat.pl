#!/usr/bin/perl
#
# Based on original version by Jon Anhold <jon@snoopy.net>
# Modifications by Jeremy Weatherford <xidus@xidus.net>
# This code is licensed under the GNU General Public License
#
# License text may be found at: http://www.gnu.org/copyleft/gpl.html
#

# stat <stat> <name>

$s = $ARGV[0];
$n = $s;
$n = $ARGV[1] if $ARGV[1];

$uptime = `uptime`;

$uptime =~ /up (.*?),/;
$up = $1;

if ($s eq "load") {
    $l = `cat /proc/loadavg`;
    $l =~ /([0-9.]+)/;
    $data = $1 * 100;
} elsif ($s eq "users") {
    $l = `w | wc -l`;
    $l =~ /(\d+)/;
    $data = $l - 2;
} elsif ($s eq "procs") {
    $l = `ps auxc | wc -l`;
    $l =~ /(\d+)/;
    $data = $l - 3;
} elsif ($s eq "dnsreqs") {
    $l = `/usr/sbin/ndc stats`;
    $l = `tail -3 /var/named/named.stats | head -1 | sed 's/  / /g' | cut -f 16 -d " "`;
    $l =~ /(\d+)/;
    $data = $l;
} elsif ($s eq "tcpopen") {
    $l = `netstat -tn | grep ESTABLISHED | wc -l`;
    $l =~ /(\d+)/;
    $data = $1;
} elsif ($s eq "uptime") {
    $data = $up;
    $i = ($data =~ /(.*?) day/);
    $data = 0;
    $data = int($1) if $i;
} else {
    $data = "0";
    $n = "unknown stat requested";
}

$data = int($data);

print "$data\n";
print "$data\n";
print "$up\n";
print "$n\n";

