
$FreeBSD: ports/textproc/p5-Pod-Perldoc/files/patch-Makefile.PL,v 1.3 2012/11/17 06:02:07 svnexp Exp $

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
