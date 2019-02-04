--- lib/UnrarXLib/os.hpp.orig	2018-08-04 11:42:34.159112000 +0200
+++ lib/UnrarXLib/os.hpp	2018-08-04 11:42:49.059432000 +0200
@@ -156,7 +156,7 @@
 #if defined(__QNXNTO__)
   #include <sys/param.h>
 #endif
-#if defined(__FreeBSD__) || defined (__NetBSD__) || defined (__OpenBSD__) || defined(__APPLE__)
+#if defined(__FreeBSD__) || defined (__NetBSD__) || defined (__OpenBSD__) || defined(__APPLE__) || defined(__DragonFly__)
   #include <sys/param.h>
   #include <sys/mount.h>
 #else
