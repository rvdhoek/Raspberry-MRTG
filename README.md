# Raspberry-MRTG
![alt tag](https://github.com/rvdhoek/Raspberry-MRTG/blob/master/Printscreen.png)

Raspberry PI with complete graphs.
---------------------------------

Setup:
------
First, update your package list:

sudo apt-get update

Then download and install MRTG:
-------------------------------
sudo apt-get install mrtg

Change directory:

cd /etc/mrtg

Clone all file's:
-----------------
git clone https://github.com/rvdhoek/Raspberry-MRTG

Run the following commands:
---------------------------
sudo mkdir /var/www/mrtg

sudo indexmaker --output=/var/www/mrtg/index.html /etc/mrtg/mrtg.cfg

Open /etc/apache2/apache.conf and add the following lines in the section containing similar Directory directives:
-----------------------------------------------------------------------------------------------------------------
Alias /mrtg "/var/www/mrtg/"
<Directory "/var/www/mrtg/">
        Options None
        AllowOverride None
        Require all granted
</Directory>

Run the following commands:
---------------------------
sudo service mrtg restart

sudo service apache2 restart

