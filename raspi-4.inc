#---------------------------------------------------------------
#       DDWRT - CPU load
#---------------------------------------------------------------
Target[192.168.1.2_cpu]: 1.3.6.1.4.1.2021.10.1.3.1&1.3.6.1.4.1.2021.10.1.3.2&1.3.6.1.4.1.2021.10.1.3.3:public@192.168.1.2
RouterUptime[192.168.1.2_cpu]:1.3.6.1.4.1.2021.10.1.3.1:public@192.168.1.2
kilo[192.168.1.2_cpu]: 20
MaxBytes[192.168.1.2_cpu]: 20
Unscaled[192.168.1.2_cpu]: dwmy
ShortLegend[192.168.1.2_cpu]: %
YLegend[192.168.1.2_cpu]: CPU Load %
Options[192.168.1.2_cpu]: integer, gauge, nopercent, growright, unknaszero, noo
Title[192.168.1.2_cpu]: DDWRT CPU load
PageTop[192.168.1.2_cpu]: <H1>DDWRT - CPU load</H1>

#---------------------------------------------------------------
#	DD-WRT number of passive TCP connections 
#---------------------------------------------------------------
Target[192.168.1.2-ddwrtTCP]: 1.3.6.1.2.1.6.6.0:public@192.168.1.2
MaxBytes[192.168.1.2-ddwrtTCP]: 1000
YLegend[192.168.1.2-ddwrtTCP]: TCP %
ShortLegend[192.168.1.2-ddwrtTCP]: %
LegendI[192.168.1.2-ddwrtTCP]: TCP
Legend1[192.168.1.2-ddwrtTCP]: TCP conn
Options[192.168.1.2-ddwrtTCP]: integer, gauge, nopercent, growright, unknaszero, noo
Title[192.168.1.2-ddwrtTCP]: DD-WRT # of passive TCP connections
PageTop[192.168.1.2-ddwrtTCP]: <H1>DD-WRT # of passive TCP connections</H1>

#---------------------------------------------------------------
#	DDWRT - Memory
#---------------------------------------------------------------
Target[192.168.1.2-ddwrtmem]: 1.3.6.1.2.1.25.2.3.1.6.101:public@192.168.1.2
MaxBytes[192.168.1.2-ddwrtmem]: 100524288
Options[192.168.1.2-ddwrtmem]: integer, gauge, nopercent, growright, unknaszero, noo
YLegend[192.168.1.2-ddwrtmem]: Mem - 1K pages
Factor[192.168.1.2-ddwrtmem]: 1024
ShortLegend[192.168.1.2-ddwrtmem]: B
LegendI[192.168.1.2-ddwrtmem]: Physical &nbsp;
LegendO[192.168.1.2-ddwrtmem]: Virtual  &nbsp;
Legend1[192.168.1.2-ddwrtmem]: Physical 
Legend2[192.168.1.2-ddwrtmem]: Virtual Memory
Title[192.168.1.2-ddwrtmem]: DDWRT Memory Usage
PageTop[192.168.1.2-ddwrtmem]: <H1>DDWRT - Memory Usage</H1>

#---------------------------------------------------------------
#	DDWRT - network traffic 1
#---------------------------------------------------------------
Target[192.168.1.2-ddwrt1]: 1.3.6.1.2.1.2.2.1.10.7:public@192.168.1.2
MaxBytes[192.168.1.2-ddwrt1]: 12500000
Options[192.168.1.2-ddwrt1]: unknaszero, growright
Title[192.168.1.2-ddwrt1]: DDWRT adapter 1 Traffic
PageTop[192.168.1.2-ddwrt1]: <H1>DDWRT adapter 1</H1>
 <TABLE>
   <TR><TD>Interface:</TD><TD>DDWRT adapter 1</TD></TR>
   <TR><TD>Max Speed:</TD><TD>54 Mbits/s</TD></TR>
 </TABLE>
#---------------------------------------------------------------

#---------------------------------------------------------------
#       DDWRT - network traffic 2
#---------------------------------------------------------------
Target[192.168.1.2-ddwrt2]: 1.3.6.1.2.1.2.2.1.10.1& 1.3.6.1.2.1.2.2.1.10.2& 1.3.6.1.2.1.2.2.1.10.3:public@192.168.1.2
MaxBytes[192.168.1.2-ddwrt2]: 12500000
Options[192.168.1.2-ddwrt2]: unknaszero, growright
Title[192.168.1.2-ddwrt2]: DDWRT adapter 2 Traffic
PageTop[192.168.1.2-ddwrt2]: <H1>DDWRT adapter 2<</H1>
 <TABLE>
   <TR><TD>Interface:</TD><TD>DDWRT adapter 2</TD></TR>
   <TR><TD>Max Speed:</TD><TD>54 Mbits/s</TD></TR>
 </TABLE>
#---------------------------------------------------------------


#---------------------------------------------------------------
#       DDWRT - network traffic 3
#---------------------------------------------------------------
Target[192.168.1.2-ddwrt3]: 1.3.6.1.2.1.2.2.1.10.2:public@192.168.1.2
MaxBytes[192.168.1.2-ddwrt3]: 12500000
Options[192.168.1.2-ddwrt3]: unknaszero, growright
Title[192.168.1.2-ddwrt3]: DDWRT adapter 3 Traffic
PageTop[192.168.1.2-ddwrt3]: <H1>DDWRT adapter 3<</H1>
 <TABLE>
   <TR><TD>Interface:</TD><TD>DDWRT adapter 3</TD></TR>
   <TR><TD>Max Speed:</TD><TD>54 Mbits/s</TD></TR>
 </TABLE>
#---------------------------------------------------------------



