#!/usr/bin/perl
# Calcul acces Fichiers par O_be_one
$lsof = `lsof 2>/dev/null | wc -l`;
$files = int($lsof);
print "$files\n";
print "$files\n";

