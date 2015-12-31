--- zthread/include/zthread/Config.h.orig	2008-03-01 04:08:48.000000000 +0200
+++ zthread/include/zthread/Config.h
@@ -110,6 +110,7 @@
 
 // Check for well known platforms
 #elif defined(__linux__) || \
+      defined(__DragonFly__) || \
       defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || \
       defined(__hpux) || \
       defined(__sgi) || \
