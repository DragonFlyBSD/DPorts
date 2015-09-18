--- include/functions_snmp_browser.php.orig	2015-01-26 16:49:43.186535252 +0200
+++ include/functions_snmp_browser.php
@@ -148,6 +148,7 @@ function snmp_browser_get_tree ($target_
 	// Call snmpwalk
 	if (empty($config['snmpwalk'])) {
 		switch (PHP_OS) {
+			case "DragonFly":
 			case "FreeBSD":
 				$snmpwalk_bin = '/usr/local/bin/snmpwalk';
 				break;
@@ -262,6 +263,7 @@ function snmp_browser_get_oid ($target_i
 	$oid_data['oid'] = $target_oid;
 	if (empty($config['snmpget'])) {
 		switch (PHP_OS) {
+			case "DragonFly":
 			case "FreeBSD":
 				$snmpget_bin = '/usr/local/bin/snmpget';
 				break;
@@ -313,6 +315,7 @@ function snmp_browser_get_oid ($target_i
 		// Translate the OID
 		if (empty($config['snmptranslate'])) {
 			switch (PHP_OS) {
+				case "DragonFly":
 				case "FreeBSD":
 					$snmptranslate_bin = '/usr/local/bin/snmptranslate';
 					break;
