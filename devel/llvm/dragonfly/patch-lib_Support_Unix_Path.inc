--- lib/Support/Unix/Path.inc.orig	2012-09-26 08:30:35.000000000 +0000
+++ lib/Support/Unix/Path.inc
@@ -261,6 +261,7 @@ Path::GetCurrentDirectory() {
 }
 
 #if defined(__FreeBSD__) || defined (__NetBSD__) || defined(__Bitrig__) || \
+    defined(__DragonFly__) || \
     defined(__OpenBSD__) || defined(__minix) || defined(__FreeBSD_kernel__) || \
     defined(__linux__) || defined(__CYGWIN__)
 static int
