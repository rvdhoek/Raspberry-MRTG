#       Raspberry Pi 2 - CPU load
Target[192.168.1.4-CPU]: .1.3.6.1.2.1.25.3.3.1.2.768&.1.3.6.1.2.1.25.1.7.0:public@192.168.1.4
MaxBytes[192.168.1.4-CPU]: 100
YLegend[192.168.1.4-CPU]: CPU %
ShortLegend[192.168.1.4-CPU]: %
Options[192.168.1.4-CPU]: integer,growright,unknaszero,nopercent,gauge,noinfo,nobanner,withzeroes,noo
Title[192.168.1.4-CPU]: Raspberry Pi 2 CPU load
PageTop[192.168.1.4-CPU]: <H1>Raspberry Pi 2 - CPU load</H1>

#       Raspberry Pi 2 - CPU temperature
Target[192.168.1.4-CPU-temp]: .1.3.6.1.2.1.25.1.8&.1.3.6.1.2.1.25.1.7.0:public@192.168.1.4

MaxBytes[192.168.1.4-CPU-temp]: 100000
MaxBytes2[192.168.1.4-CPU-temp]: 100000
kMG[192.168.1.4-CPU-temp]: ,
Title[192.168.1.4-CPU-temp]: CPU temperature for Raspberry Pi 2
Options[192.168.1.4-CPU-temp]: integer,growright,unknaszero,nopercent,gauge,noinfo,nobanner,withzeroes,noo
YLegend[192.168.1.4-CPU-temp]: Temperature (Celsius)
ShortLegend[192.168.1.4-CPU-temp]: Celsius
Factor[192.168.1.4-CPU-temp]: 0.001
PageTop[192.168.1.4-CPU-temp]: <H1>Raspberry Pi 2 -- CPU Temperature</H1>

#       Raspberry Pi 2 - Memory
Target[192.168.1.4-mem]: .1.3.6.1.2.1.25.2.3.1.6.1&.1.3.6.1.2.1.25.2.3.1.6.3:public@192.168.1.4
MaxBytes[192.168.1.4-mem]: 100524288
Options[192.168.1.4-mem]: integer,growright,unknaszero,nopercent,gauge,noinfo,nobanner,withzeroes,noo
YLegend[192.168.1.4-mem]: Mem MB
Factor[192.168.1.4-mem]: 1024
ShortLegend[192.168.1.4-mem]: B
LegendI[192.168.1.4-mem]: Physical &nbsp;
Title[192.168.1.4-mem]: Raspberry Pi 2 Memory Usage
PageTop[192.168.1.4-mem]: <H1>Raspberry Pi 2 - Memory Usage</H1>

