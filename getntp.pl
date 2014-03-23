################################## 
#getntp.pl 
#source : http://www.satsignal.eu/ntp/NTPandMRTG.html 
#budiw 20120728

$ntp_str = `ntpq -c rv $ARGV[0]`;
$val = (split(/\,/,$ntp_str))[20];
$val =~ s/offset=//i;
$val = int ($val + 100);
if ($val < 0) {
$val = 0;
}
print "0\n";
print "$val\n";
print "0\n";
print "0\n";

