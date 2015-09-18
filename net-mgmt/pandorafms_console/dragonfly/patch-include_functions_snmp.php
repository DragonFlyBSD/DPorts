--- include/functions_snmp.php.orig	2015-01-26 16:49:43.454535259 +0200
+++ include/functions_snmp.php
@@ -28,6 +28,7 @@ function snmp_generate_trap($snmp_host_a
 	// Call snmptrap
 	if (empty($config['snmptrap'])) {
 		switch (PHP_OS) {
+			case "DragonFly":
 			case "FreeBSD":
 				$snmpwalk_bin = '/usr/local/bin/snmptrap';
 				break;
