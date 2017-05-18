# Raspberry-MRTG
Raspberry PI with complete graphs.
For monitoring a Raspberry PI equipped with GPS,NTP time server and some sensors.
---------------------------------
![alt tag](https://github.com/rvdhoek/Raspberry-MRTG/blob/master/Printscreen.png)

Setup:
------
First, update your package list:
```
sudo apt-get update
```
Then download and install MRTG and mode..:
-------------------------------
```
sudo apt-get install mrtg
sudo apt-get install bc
sudo apt-get install lynx
sudo apt-get install ntpdate
sudo apt-get install jq
sudo apt-get install tcpdump
```
Change directory:
-----------------
```
cd /tmp
```
Clone all file's:
-----------------
```
git clone https://github.com/rvdhoek/Raspberry-MRTG
```

```
cd Raspberry-MRTG
cp -r ./Raspberry-MRTG/. /etc/mrtg/.
cd/etc/mrtg
```
Run the following commands:
---------------------------
```
sudo mkdir /var/www/mrtg
sudo indexmaker --output=/var/www/mrtg/index.html /etc/mrtg/mrtg.cfg
```
Open /etc/apache2/apache.conf and add the following lines in the section containing similar Directory directives:
-----------------------------------------------------------------------------------------------------------------
```
Alias /mrtg "/var/www/mrtg/"
<Directory "/var/www/mrtg/">
        Options None
        AllowOverride None
        Require all granted
</Directory>
```
Run the following commands:
---------------------------
```
sudo service mrtg restart
```
```
sudo service apache2 restart
```

If there are problems:
---------------------
```
--Run in the commandline: sudo env LANG=C /usr/bin/mrtg /etc/mrtg/mrtg.cfg 
--Run the bash or perl script in the commandline. (bash testport.sh 22)
--Search in google....
```



