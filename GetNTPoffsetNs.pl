# Expects node name as a parameter
# Returns 1st value for positive offsets, second value for negative
# Returns microseconds of offset
$ntp_str = `ntpq -c rv $ARGV[0]`;	# execute "ntpq -c rv <node>"
$val = (split(/\,/,$ntp_str))[20];	# get the offset string
$val =~ s/offset=//i;			# remove the "offset="
$val = int (1000000 * $val);		# convert to nanoseconds
$nval = $val;				# prepare the negative value
if ($val < 0){
$nval = -$nval;				# make the value positive
$val = 0;				# ensure zero return for the positive
} else {
$nval = 0;				# ensure zero return for the negative
}
print "$nval\n";			# return four numbers, incoming
print "$val\n";				# outgoing
print "0\n";
print "$ARGV[0]\n";


