--- lib/Support/Unix/Path.inc.orig	2012-04-11 17:35:36.000000000 +0200
+++ lib/Support/Unix/Path.inc	2013-01-03 13:46:42.254932000 +0100
@@ -261,6 +261,7 @@
 }
 
 #if defined(__FreeBSD__) || defined (__NetBSD__) || \
+    defined(__DragonFly__) || \
     defined(__OpenBSD__) || defined(__minix) || defined(__FreeBSD_kernel__)
 static int
 test_dir(char buf[PATH_MAX], char ret[PATH_MAX],
