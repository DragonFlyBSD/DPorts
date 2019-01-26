--- include/ajax/events.php.orig	2015-02-23 01:36:32.361262078 +0200
+++ include/ajax/events.php
@@ -122,6 +122,7 @@ if ($perform_event_response) {
 	$command = get_parameter('target','');
 	
 	switch (PHP_OS) {
+		case "DragonFly":
 		case "FreeBSD":
 			$timeout_bin = '/usr/local/bin/gtimeout';
 			break;
