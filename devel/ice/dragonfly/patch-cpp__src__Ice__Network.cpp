--- cpp/src/Ice/Network.cpp.orig	2014-10-06 03:36:09 UTC
+++ cpp/src/Ice/Network.cpp
@@ -51,7 +51,7 @@
 #   include <sys/ioctl.h>
 #endif
 
-#if defined(__linux) || defined(__APPLE__) || defined(__FreeBSD__)
+#if defined(__linux) || defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #  include <ifaddrs.h>
 #elif defined(__sun)
 #  include <sys/sockio.h>
