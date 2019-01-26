--- install.php.orig	2015-10-15 12:02:06 UTC
+++ install.php
@@ -559,6 +559,9 @@ function install_step2() {
 			if (PHP_OS == "FreeBSD") {
 				$res += check_exists ("/usr/local/bin/twopi","Graphviz Binary");
 			}
+			elseif (PHP_OS == "DragonFly") {
+				$res += check_exists ("/usr/local/bin/twopi","Graphviz Binary");
+			}
 			else if (PHP_OS == "NetBSD") {
 				$res += check_exists ("/usr/pkg/bin/twopi","Graphviz Binary");
 			}
@@ -816,6 +819,10 @@ function install_step4() {
 							
 							$step4 = parse_mysql_dump("pandoradb_data.sql");
 							check_generic ($step4, "Populating database");
+							if (PHP_OS == "DragonFly") {
+								$step_freebsd = adjust_paths_for_freebsd ($engine);
+								check_generic ($step_freebsd, "Adjusting paths in database for DragonFly");
+							}
 							if (PHP_OS == "FreeBSD") {
 								$step_freebsd = adjust_paths_for_freebsd ($engine);
 								check_generic ($step_freebsd, "Adjusting paths in database for FreeBSD");
@@ -901,6 +908,11 @@ function install_step4() {
 						
 						check_generic ($step2, "Populating database");
 						
+						if (PHP_OS == "DragonFly")
+						{
+							$step_freebsd = adjust_paths_for_freebsd ($engine, $connection);
+							check_generic ($step_freebsd, "Adjusting paths in database for DragonFly");
+						}
 						if (PHP_OS == "FreeBSD")
 						{
 							$step_freebsd = adjust_paths_for_freebsd ($engine, $connection);
@@ -1019,6 +1031,11 @@ function install_step4() {
 						
 						check_generic ($step4, "Populating database");
 						
+						if (PHP_OS == "DragonFly") {
+							$step_freebsd = adjust_paths_for_freebsd ($engine, $connection);
+							check_generic ($step_freebsd, "Adjusting paths in database for DragonFly");
+						}
+
 						if (PHP_OS == "FreeBSD") {
 							$step_freebsd = adjust_paths_for_freebsd ($engine, $connection);
 							check_generic ($step_freebsd, "Adjusting paths in database for FreeBSD");
