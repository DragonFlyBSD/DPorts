
$FreeBSD: textproc/p5-Pod-Perldoc/files/patch-Makefile.PL 300897 2012-07-14 14:29:18Z beat $

--- Makefile.PL.orig
+++ Makefile.PL
@@ -33,8 +33,6 @@
             'warnings'                  => '0',
            },
 
-    'EXE_FILES' => [qw( perldoc )],
-
 	'META_MERGE' => {
 		no_index => {
 			directory => 'corpus',
