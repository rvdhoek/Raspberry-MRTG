Raspberry-MRTG
==============

Raspberry PI with following graphs:

-Raspberry Pi 1 - CPU load
CPU load for Raspberry.

-Raspberry Pi 1 -- CPU Temperature
CPU temperature for Raspberry.
	
-Raspberry Pi 1 - LAN Traffic Analysis
Usage of the ethernetport.

-Process Statistics
Number of used processes.
	
-Number of open files
	
-Number of processes
	
-Received and sent NTP packets
	
-Lan hosts
Number of lan hosts.
	
-Round Trip Time Gateway
Time and timeout graph using ping.

-Round Trip Time China
Time and timeout graph using ping.
	
-Apache Total Accesses
Number of accesses local Apache server.
	
-DNS Speed
Speed measure, dns server.


----------------------------------------------------------------------------
My LAN setup:

Here is a schematic representation of my local network.






								|-----RASPBERRY PI 1 192.168.1.3
								|
								|
								|
INTERNET----DOCSIS MODEM------ROUTER------------------------LAPTOP, COMPUTER 192.168.1.0/24
				192.168.1.1			|
								|
								|
								|----RASPBERRY PI 2 192.168.1.4
										



										

										
------------------------------------------------------------------------------						
Installation:

These steps must be followed to get a working installation

I will not write a comprehensive roadmap but i use manuals of other websites.

Step 1:
Write the latest raspbian version on a SD card.
http://downloads.raspberrypi.org/raspbian_latest

Install SSMTP as your email client.
http://www.sbprojects.com/projects/raspberrypi/exim4.php

Step 2a:
Install Apache.

Install MRTG.
http://www.iceflatline.com/2009/08/how-to-install-and-configure-mrtg-on-ubuntu-server/

Note: Don't use sudo cfgmaker --output=/etc/mrtg/mrtg.cfg public@your-router's-IP-address

Step 2b:
Copy following file's to /etc/mrtg.

 accesslog.bash
 count-apps.sh
 count-connections.sh
 count-proces.sh
 countpptpusers.bash
 files.pl
 getntp.pl
 GetNTP10usec.pl
 GetNTP3000usec.pl
 GetNTPmicrosec.pl
 GetNTPoffsetNs.pl
 hostcounter.bash
 linux_proc.pl
 linux_users.pl
 mrtg.pid
 mrtg_ping.sh
 ntppackets.pl
 raspi-1.inc
 raspi-2.inc
 raspi-3.inc
 raspi-4.inc
 speeddns.bash
 speedtest.bash
 stat.pl
 webstats.pl
 mrtg.cfg
 
Step 3:
Make changes in these 2 file's.
 mrtg_ping.sh (Mail address)
 mrtg.cfg (Name and Mail address)
 raspi-1.inc (Check for correct IP addresses)
 raspi-2.inc (Check for correct IP addresses)
 raspi-3.inc (Check for correct IP addresses)

Step 4:
Run the following commands:
 sudo indexmaker --output=/var/www/mrtg/index.html /etc/mrtg/mrtg.cfg
 sudo /etc/init.d/mrtg restart




