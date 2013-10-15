
$FreeBSD: www/eventum/files/patch-misc_monitor.php 300897 2012-07-14 14:29:18Z beat $

--- misc/monitor.php.orig
+++ misc/monitor.php
@@ -39,17 +39,17 @@
 $required_files = array(
     APP_PATH . 'config/config.php' => array(
         'check_owner'      => true,
-        'owner'            => 'apache',
+        'owner'            => '%%WWWOWN%%',
         'check_group'      => true,
-        'group'            => 'apache',
+        'group'            => '%%WWWGRP%%',
         'check_permission' => true,
         'permission'       => 755,
     ),
     APP_PATH . 'config/setup.php' => array(
         'check_owner'      => true,
-        'owner'            => 'apache',
+        'owner'            => '%%WWWOWN%%',
         'check_group'      => true,
-        'group'            => 'apache',
+        'group'            => '%%WWWGRP%%',
         'check_permission' => true,
         'permission'       => 750,
         'check_filesize'   => true,
