#	Raspberry Pi 1 - CPU load
Target[raspi1-CPU]: `bash /etc/mrtg/cpuload.sh`
MaxBytes[raspi1-CPU]: 100
YLegend[raspi1-CPU]: CPU %
ShortLegend[raspi1-CPU]: %
Options[raspi1-CPU]: integer,growright,unknaszero,nopercent,gauge,noinfo,nobanner,withzeroes,noo
Title[raspi1-CPU]: Raspberry Pi 1 CPU load
PageTop[raspi1-CPU]: <H1>Raspberry Pi 1 - CPU load</H1>

#	Raspberry Pi 1 - CPU temperature
Target[raspi1-CPU-temp]: .1.3.6.1.2.1.25.1.8&.1.3.6.1.2.1.25.1.7.0:public@localhost
MaxBytes[raspi1-CPU-temp]: 100000
MaxBytes2[raspi1-CPU-temp]: 100000
kMG[raspi1-CPU-temp]: ,
Title[raspi1-CPU-temp]: CPU temperature for Raspberry Pi 1
Options[raspi1-CPU-temp]: integer,growright,unknaszero,nopercent,gauge,noinfo,nobanner,withzeroes,noo
YLegend[raspi1-CPU-temp]: Celsius
ShortLegend[raspi1-CPU-temp]: Celsius
Factor[raspi1-CPU-temp]: 0.001
PageTop[raspi1-CPU-temp]: <H1>Raspberry Pi 1 -- CPU Temperature</H1>

#	Raspberry Pi 1 - Memory

Target[raspi1-mem]: .1.3.6.1.2.1.25.2.3.1.6.1&.1.3.6.1.2.1.25.2.3.1.6.3:public@localhost
MaxBytes[raspi1-mem]: 100524288
Options[raspi1-mem]: integer,growright,unknaszero,nopercent,gauge,noinfo,nobanner,withzeroes,noo
YLegend[raspi1-mem]: Mem MB
Factor[raspi1-mem]: 1024
ShortLegend[raspi1-mem]: B
LegendI[raspi1-mem]: Physical &nbsp;
Title[raspi1-mem]: Raspberry Pi 1 Memory Usage
PageTop[raspi1-mem]: <H1>Raspberry Pi 1 - Memory Usage</H1>

#       Raspberry Pi 1 - network traffic
Target[raspi1-networktraffic]: 2:public@localhost
MaxBytes[raspi1-networktraffic]: 12500000
Options[raspi1-networktraffic]: unknaszero, growright,,noinfo,nobanner
Title[raspi1-networktraffic]: Traffic Analysis for on-board Ethernet adapter
PageTop[raspi1-networktraffic]: <H1>Raspberry Pi 1 - LAN Traffic Analysis</H1>
 <TABLE>
   <TR><TD>Interface:</TD><TD>On board Ethernet interface</TD></TR>
   <TR><TD>Max Speed:</TD><TD>12.5 MBytes/s</TD></TR>
 </TABLE>

# get number of current users
Target[localhost.users]: `perl /etc/mrtg/linux_users.pl`
Title[localhost.users]: Logged in Users
PageTop[localhost.users]: <H1>Number of Users</H1>
MaxBytes[localhost.users]: 100000
ShortLegend[localhost.users]: Users
kMG[localhost.users]: ,
YLegend[localhost.users]: users count 
Options[localhost.users]: integer,nopercent,growright,unknaszero,nopercent,gauge,noinfo,nobanner,withzeroes,noo

# get number of current accepted users
Target[localhost.acceptusers]: `bash /etc/mrtg/linux_acceptedusers.sh`
Title[localhost.acceptusers]: Logged in # Accepted Users
PageTop[localhost.acceptusers]: <H1>Number of accepted Users</H1>
MaxBytes[localhost.acceptusers]: 100000
ShortLegend[localhost.acceptusers]: Users
kMG[localhost.acceptusers]: ,
YLegend[localhost.acceptusers]: users count
Options[localhost.acceptusers]: integer,nopercent,growright,unknaszero,nopercent,gauge,noinfo,nobanner,withzeroes,noo

# get number of current refused users
Target[localhost.refusers]: `bash /etc/mrtg/linux_refusers.sh`
Title[localhost.refusers]: Logged in # refused Users
PageTop[localhost.refusers]: <H1>Number of refused Users</H1>
MaxBytes[localhost.refusers]: 100000
ShortLegend[localhost.refusers]: Users
kMG[localhost.refusers]: ,
YLegend[localhost.refusers]: users count
Options[localhost.refusers]: integer,nopercent,growright,unknaszero,nopercent,gauge,noinfo,nobanner,withzeroes,noo

# get number of processes running
Target[localhost.procs]: `perl /etc/mrtg/linux_proc.pl`
Title[localhost.procs]: Process Statistics
PageTop[localhost.procs]: <H1>Process Statistics</H1>
MaxBytes[localhost.procs]: 10000
ShortLegend[localhost.procs]: Processes
kMG[localhost.procs]: ,
YLegend[localhost.procs]: Processes
LegendI[localhost.procs]: Processes:
Legend1[localhost.procs]: Number of Blocked Processes
Options[localhost.procs]: growright,unknaszero,nopercent,gauge,noinfo,nobanner,withzeroes,noo

# monitor root FS 
Target[localhost.rootfs]: .1.3.6.1.4.1.2021.9.1.8.1&.1.3.6.1.4.1.2021.9.1.6.1:public@localhost
PageTop[localhost.rootfs]: <H1>Root FS Usage</H1>
Options[localhost.rootfs]: integer,growright,unknaszero,nopercent,gauge,noinfo,nobanner,withzeroes,noo
Title[localhost.rootfs]: Root FS Usage
MaxBytes[localhost.rootfs]: 100000000
Factor[localhost.rootfs]: 0.001
YLegend[localhost.rootfs]: Mbytes
ShortLegend[localhost.rootfs]: bytes
LegendI[localhost.rootfs]: Root FS Usage:

#number of open files
Target[Ofiles]: `perl /etc/mrtg/files.pl`
Options[Ofiles]: integer,growright,unknaszero,nopercent,gauge,noinfo,nobanner,withzeroes,noi
Title[Ofiles]: Files
MaxBytes[Ofiles]: 100000
#AbsMax[Ofiles]: 200000
kMG[Ofiles]: ,
YLegend[Ofiles]: Files
ShortLegend[Ofiles]: Files
LegendO[Ofiles]:  Files:
PageTop[Ofiles]: <H1>Number of open files</H1>
WithPeak[Ofiles]: wmy

#number of running applications
Target[count-apps]: `sh /etc/mrtg/count-apps.sh`
Options[count-apps]: integer,growright,unknaszero,nopercent,gauge,noinfo,nobanner,withzeroes,noo
Title[count-apps]: Files
MaxBytes[count-apps]: 1000
#AbsMax[count-apps]: 10000
kMG[count-apps]: ,
YLegend[count-apps]: Number
ShortLegend[count-apps]: App's
LegendO[count-apps]: Number:
PageTop[count-apps]: <H1>Number of running applications</H1>
WithPeak[count-apps]: wmy

#number of processes
Target[num-procs]: `sh /etc/mrtg/count-proces.sh`
Options[num-procs]: integer,growright,unknaszero,nopercent,gauge,noinfo,nobanner,withzeroes
Title[num-procs]: Processes
MaxBytes[num-procs]: 2000
kMG[num-procs]: ,
YLegend[num-procs]: Processes
ShortLegend[num-procs]: Processes
LegendI[num-procs]: Running
LegendO[num-procs]: All
Legend1[num-procs]: Active processes.
Legend2[num-procs]: Started processes.
PageTop[num-procs]: <H1>Number of processes</H1>

#number of ip connections
Target[count-connections]: `sh /etc/mrtg/count-connections.sh`
Options[count-connections]: integer,growright,unknaszero,nopercent,gauge,noinfo,nobanner,withzeroes,noo
Title[count-connections]: Files
MaxBytes[count-connections]: 1000
#AbsMax[count-connections]: 2000
kMG[count-connections]: ,
YLegend[count-connections]: Connections
ShortLegend[count-connections]: Connections
LegendO[count-connections]:  Connections:
PageTop[count-connections]: <H1>Number of established ip connections</H1>
WithPeak[count-connections]: wmy

#  NTP offsets
Target[raspi1_ntp-o]: `perl /etc/mrtg/getntp.pl localhost`
MaxBytes[raspi1_ntp-o]: 100
MaxBytes2[raspi1_ntp-o]: 200
Unscaled[raspi1_ntp-o]: dwmy
Title[raspi1_ntp-o]: NTP statistics for localhost - offset from NTP
Options[raspi1_ntp-o]: integer,growright,unknaszero,nopercent,gauge,noinfo,nobanner,withzeroes,noi
YLegend[raspi1_ntp-o]: offset+100 ms
ShortLegend[raspi1_ntp-o]: ms
LegendO[raspi1_ntp-o]: offset:
Legend2[raspi1_ntp-o]: time offset in ms, with 100ms offset added to ensure it's positive!
PageTop[raspi1_ntp-o]: <H1>NTP -- localhost</H1>

