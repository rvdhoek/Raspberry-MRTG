Target[host.counter]: `bash /etc/mrtg/hostcounter.bash`
Options[host.counter]:  integer,nopercent,growright,unknaszero,nopercent,gauge,noinfo,nobanner,withzeroes,noo
MaxBytes[host.counter]:20
kMG[host.counter]: ,
YLegend[host.counter]: Lan hosts
ShortLegend[host.counter]: Users
Title[host.counter]: Lan hosts
PageTop[host.counter]: <H1>Lan hosts</H1>
WithPeak[host.counter]: wmy

Target[pptp.counter]: `bash /etc/mrtg/countpptpusers.bash`
Options[pptp.counter]:  integer,nopercent,growright,unknaszero,nopercent,gauge,noinfo,nobanner,withzeroes,noo
MaxBytes[pptp.counter]:20
kMG[pptp.counter]: ,
YLegend[pptp.counter]: PPTP users
ShortLegend[pptp.counter]: Users
Title[pptp.counter]: PPTP users
PageTop[pptp.counter]: <H1>PPTP users</H1>
WithPeak[pptp.counter]: wmy

Title[8888.ping]: RTT to 8.8.8.8 (DNS Google)
PageTop[8888.ping]: <H1>Round Trip Time Google</H1>
Target[8888.ping]: `sh /etc/mrtg/mrtg_ping.sh 8.8.8.8`
MaxBytes[8888.ping]: 1000
Options[8888.ping]: growright,unknaszero,nopercent,gauge,noinfo,nobanner,withzeroes
ShortLegend[8888.ping]: ms
LegendI[8888.ping]: Pkt lose %
LegendO[8888.ping]: RTT (avg)
YLegend[8888.ping]: RTT (ms)

Title[611486042.ping]: RTT to 212.54.35.25 (ZiggoDns)
PageTop[611486042.ping]:<H1>Round Trip Time China</H1>
Target[611486042.ping]: `sh /etc/mrtg/mrtg_ping.sh 212.54.35.25`
MaxBytes[611486042.ping]: 1000
Options[611486042.ping]: growright,unknaszero,nopercent,gauge,noinfo,nobanner,withzeroes
ShortLegend[611486042.ping]: ms
LegendI[611486042.ping]: Pkt lose %
LegendO[611486042.ping]: RTT (avg)
YLegend[611486042.ping]: RTT (ms)

Title[62.69.166.254.ping]: RTT to 62.69.166.254 (Nu.nl)
PageTop[62.69.166.254.ping]: <H1>Round Trip Time Nu.nl</H1>
Target[62.69.166.254.ping]: `sh /etc/mrtg/mrtg_ping.sh 62.69.166.254`
MaxBytes[62.69.166.254.ping]: 1000
Options[62.69.166.254.ping]: growright,unknaszero,nopercent,gauge,noinfo,nobanner,withzeroes
ShortLegend[62.69.166.254.ping]: ms
LegendI[62.69.166.254.ping]: Pkt lose %
LegendO[62.69.166.254.ping]: RTT (avg)
YLegend[62.69.166.254.ping]: RTT (ms)

Title[speedtest.file1]: Speedtest 1Mb file
PageTop[speedtest.file1]:<H1>Speedtest 1Mb file</H1>
Target[speedtest.file1]: `bash /etc/mrtg/speedtest.bash https://www.drupal.org/files/issues/1mb.txt`
MaxBytes[speedtest.file1]: 100000000
Options[speedtest.file1]: growright,unknaszero,nopercent,gauge,noinfo,nobanner,withzeroes,noo
ShortLegend[speedtest.file1]:
LegendI[speedtest.file1]: Time (ms)
YLegend[speedtest.file1]: Time (ms)

#---------Apache hits-----------------------
Target[apache]: `perl /etc/mrtg/webstats.pl hits`
Options[apache]:  integer,nopercent,growright,unknaszero,nopercent,gauge,noinfo,nobanner,withzeroes,noo
MaxBytes[apache]: 1000000
YLegend[apache]: hits/hour
ShortLegend[apache]: per hour &nbsp;&nbsp; 
LegendO[apache]: Hits:
Title[apache]: Apache Total Accesses
PageTop[apache]: <H1>Apache Total Accesses</H1>
WithPeak[apache]: wmy

#---------Apache traffic-----------------------
Target[apache_bytes]: `perl /etc/mrtg/webstats.pl bytes`
Options[apache_bytes]:  growright,unknaszero,nopercent,gauge,noinfo,nobanner,withzeroes,noo
MaxBytes[apache_bytes]:2000000
YLegend[apache_bytes]: bytes/s
ShortLegend[apache_bytes]: bytes/s
Title[apache_bytes]: Apache Total Traffic
PageTop[apache_bytes]: <H1>Apache Total Traffic</H1>
WithPeak[apache_bytes]: wmy

#---------DNS speed-----------------------
Target[dns.speed]: `bash /etc/mrtg/speeddns.bash 8.8.8.8`
Options[dns.speed]:  growright,unknaszero,nopercent,gauge,noinfo,nobanner,withzeroes,noo
MaxBytes[dns.speed]:1000
YLegend[dns.speed]: Time (ms)
ShortLegend[dns.speed]: msec
Title[dns.speed]: DNS Speed
PageTop[dns.speed]: <H1>DNS Speed 8.8.8.8</H1>
WithPeak[dns.speed]: wmy

Target[dns1.speed]: `bash /etc/mrtg/speeddns.bash 212.54.35.25`
Options[dns1.speed]: growright,unknaszero,nopercent,gauge,noinfo,nobanner,withzeroes,noo
MaxBytes[dns1.speed]:1000
YLegend[dns1.speed]: Time (ms)
ShortLegend[dns1.speed]: msec
Title[dns1.speed]: DNS Speed
PageTop[dns1.speed]: <H1>DNS Speed 212.54.35.25</H1>
WithPeak[dns1.speed]: wmy

Target[dns2.speed]: `bash /etc/mrtg/speeddns.bash 212.54.40.25`
Options[dns2.speed]:  growright,unknaszero,nopercent,gauge,noinfo,nobanner,withzeroes,noo
MaxBytes[dns2.speed]:1000
YLegend[dns2.speed]: Time (ms)
ShortLegend[dns2.speed]: msec
Title[dns2.speed]: DNS Speed
PageTop[dns2.speed]: <H1>DNS Speed 212.54.40.25</H1>
WithPeak[dns2.speed]: wmy

#---------Test ntp-----------------------
Target[port.test]: `bash /etc/mrtg/testport.sh 1723`
Title[port.test]: Port 1723 test
PageTop[port.test]: <H1>Port 1723 test</H1>
MaxBytes[port.test]: 2
ShortLegend[port.test]: 1=Online
kMG[port.test]: ,
YLegend[port.test]: 1=Online
Options[port.test]: integer,nopercent,growright,unknaszero,nopercent,gauge,noinfo,nobanner,withzeroes,noo

Target[wifi.counter]: `bash /etc/mrtg/wifinetworkscan.sh`
Options[wifi.counter]:  integer,nopercent,growright,unknaszero,nopercent,gauge,noinfo,nobanner,withzeroes,noo
MaxBytes[wifi.counter]:20
kMG[wifi.counter]: ,
YLegend[wifi.counter]: Wifi networks
ShortLegend[wifi.counter]: Wifi networks
Title[wifi.counter]: Wifi networks in the air
PageTop[wifi.counter]: <H1>Wifi networks in the air</H1>
WithPeak[wifi.counter]: wmy

Target[dvb826.dvb]: `bash /etc/mrtg/dvblevel.sh 826000000`
Options[dvb826.dvb]: integer,nopercent,growright,unknaszero,nopercent,gauge,noinfo,nobanner,withzeroes,noo
kMG[dvb826.dvb]: ,
MaxBytes[dvb826.dvb]: 100
YLegend[dvb826.dvb]: Level %
ShortLegend[dvb826.dvb]: Level %
Title[dvb826.dvb]: DVB-C 826Mhz level
PageTop[dvb826.dvb]: <H1>DVB-C 826Mhz level</H1>
WithPeak[dvb826.dvb]: wmy
