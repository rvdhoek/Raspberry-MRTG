Target[host.counter]: `bash /etc/mrtg/hostcounter.bash`
Options[host.counter]:  growright,unknaszero,nopercent,gauge,noinfo,nobanner,withzeroes,noo
MaxBytes[host.counter]:20
#AbsMax[host.counter]:255
kMG[host.counter]: ,
YLegend[host.counter]: Lan hosts
ShortLegend[host.counter]: Users
Title[host.counter]: Lan hosts
PageTop[host.counter]: <H1>Lan hosts</H1>
WithPeak[host.counter]: wmy

Target[pptp.counter]: `bash /etc/mrtg/countpptpusers.bash`
Options[pptp.counter]:  growright,unknaszero,nopercent,gauge,noinfo,nobanner,withzeroes,noo
MaxBytes[pptp.counter]:20
#AbsMax[pptp.counter]:255
kMG[pptp.counter]: ,
YLegend[pptp.counter]: PPTP users
ShortLegend[pptp.counter]: Users
Title[pptp.counter]: PPTP users
PageTop[pptp.counter]: <H1>PPTP users</H1>
WithPeak[pptp.counter]: wmy

Title[gateway.ping]: RTT to Gateway)
PageTop[gateway.ping]: <H1>Round Trip Time Gateway</H1>
Target[gateway.ping]: `sh /etc/mrtg/mrtg_ping.sh 192.168.1.1`
MaxBytes[gateway.ping]: 1000
Options[gateway.ping]: growright,unknaszero,nopercent,gauge,noinfo,nobanner,withzeroes
ShortLegend[gateway.ping]: ms
LegendI[gateway.ping]: Pkt lose %
LegendO[gateway.ping]: RTT (avg)
YLegend[gateway.ping]: RTT (ms)

Title[8888.ping]: RTT to 8.8.8.8 (DNS Google)
PageTop[8888.ping]: <H1>Round Trip Time Google</H1>
Target[8888.ping]: `sh /etc/mrtg/mrtg_ping.sh 8.8.8.8`
MaxBytes[8888.ping]: 1000
Options[8888.ping]: growright,unknaszero,nopercent,gauge,noinfo,nobanner,withzeroes
ShortLegend[8888.ping]: ms
LegendI[8888.ping]: Pkt lose %
LegendO[8888.ping]: RTT (avg)
YLegend[8888.ping]: RTT (ms)

Title[611486042.ping]: RTT to 61.148.60.42 (Beijing, China)
PageTop[611486042.ping]:<H1>Round Trip Time China</H1>
Target[611486042.ping]: `sh /etc/mrtg/mrtg_ping.sh 61.148.60.42`
MaxBytes[611486042.ping]: 1000
Options[611486042.ping]: growright,unknaszero,nopercent,gauge,noinfo,nobanner,withzeroes
ShortLegend[611486042.ping]: ms
LegendI[611486042.ping]: Pkt lose %
LegendO[611486042.ping]: RTT (avg)
YLegend[611486042.ping]: RTT (ms)

Title[speedtest.file1]: Speedtest 1Mb file
PageTop[speedtest.file1]:<H1>Speedtest 1Mb file</H1>
Target[speedtest.file1]: `bash /etc/mrtg/speedtest.bash https://173.194.65.82/files/1mb.txt`
MaxBytes[speedtest.file1]: 1000000
Options[speedtest.file1]: growright,unknaszero,nopercent,gauge,noinfo,nobanner,withzeroes,noo
ShortLegend[speedtest.file1]:
LegendI[speedtest.file1]: Time (ms)
YLegend[speedtest.file1]: Time (ms)

#---------Apache hits-----------------------
Target[apache]: `perl /etc/mrtg/webstats.pl hits`
Options[apache]:  growright,unknaszero,nopercent,gauge,noinfo,nobanner,withzeroes,noo
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
#AbsMax[apache_bytes]:20000 
YLegend[apache_bytes]: bytes/s
ShortLegend[apache_bytes]: bytes/s
Title[apache_bytes]: Apache Total Traffic
PageTop[apache_bytes]: <H1>Apache Total Traffic</H1>
WithPeak[apache_bytes]: wmy

#---------DNS speed-----------------------
Target[dns.speed]: `bash /etc/mrtg/speeddns.bash`
Options[dns.speed]:  growright,unknaszero,nopercent,gauge,noinfo,nobanner,withzeroes,noo
MaxBytes[dns.speed]:1000
#AbsMax[dns.speed]:20000
YLegend[dns.speed]: Time (ms)
ShortLegend[dns.speed]: msec
Title[dns.speed]: DNS Speed
PageTop[dns.speed]: <H1>DNS Speed</H1>
WithPeak[dns.speed]: wmy

