--- install.php.orig	2015-02-23 17:17:44.131719236 +0200
+++ install.php
@@ -539,9 +539,13 @@ function install_step2() {
 			$res += check_extension("zip","PHP Zip");
 			$res += check_extension("zlib","PHP Zlib extension");
 			$res += check_extension("curl","CURL (Client URL Library)");
+
 			if (PHP_OS == "FreeBSD") {
 				$res += check_exists ("/usr/local/bin/twopi","Graphviz Binary");
 			}
+			elseif (PHP_OS == "DragonFly") {
+				$res += check_exists ("/usr/local/bin/twopi","Graphviz Binary");
+			}
 			else if (PHP_OS == "NetBSD") {
 				$res += check_exists ("/usr/pkg/bin/twopi","Graphviz Binary");
 			}
@@ -796,6 +800,10 @@ function install_step4() {
 							
 							$step4 = parse_mysql_dump("pandoradb_data.sql");
 							check_generic ($step4, "Populating database");
+							if (PHP_OS == "DragonFly") {
+								$step_freebsd = adjust_paths_for_freebsd ($engine);
+								check_generic ($step_freebsd, "Adjusting paths in database for DragonFly");
+							}
 							if (PHP_OS == "FreeBSD") {
 								$step_freebsd = adjust_paths_for_freebsd ($engine);
 								check_generic ($step_freebsd, "Adjusting paths in database for FreeBSD");
@@ -881,6 +889,11 @@ function install_step4() {
 						
 						check_generic ($step2, "Populating database");	
 
+						if (PHP_OS == "DragonFly")
+						{
+							$step_freebsd = adjust_paths_for_freebsd ($engine, $connection);
+							check_generic ($step_freebsd, "Adjusting paths in database for DragonFly");
+						}
 						if (PHP_OS == "FreeBSD")
  {
 							$step_freebsd = adjust_paths_for_freebsd ($engine, $connection);
@@ -999,6 +1012,11 @@ function install_step4() {
 						
 						check_generic ($step4, "Populating database");
 
+						if (PHP_OS == "DragonFly")
+						{
+							$step_freebsd = adjust_paths_for_freebsd ($engine, $connection);
+							check_generic ($step_freebsd, "Adjusting paths in database for DragonFly");
+						}
 						if (PHP_OS == "FreeBSD")
  {
 							$step_freebsd = adjust_paths_for_freebsd ($engine, $connection);
