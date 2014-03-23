$ntp_str = `ntpq -c rv $ARGV[0]`;
$val = (split(/\,/,$ntp_str))[20];
$val =~ s/offset=//i;
$val = 1000.0 * $val;	# convert to microseconds
$report = int ($val + 500);	#  -500..+500 microseconds => 0..1000
if ($report < 0) {
  $report = 0;
}
if ($report > 1000) {
  $report = 1000;
}
print "0\n";
print "$report\n";
print "0\n";
print "0\n";


