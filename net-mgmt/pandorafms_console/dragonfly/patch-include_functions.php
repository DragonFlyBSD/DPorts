--- include/functions.php.orig	2015-02-23 01:36:32.369262504 +0200
+++ include/functions.php
@@ -1478,6 +1478,7 @@ function get_snmpwalk($ip_target, $snmp_
 	
 	if (empty($config['snmpwalk'])) {
 		switch (PHP_OS) {
+			case "DragonFly":
 			case "FreeBSD":
 				$snmpwalk_bin = '/usr/local/bin/snmpwalk';
 				break;
