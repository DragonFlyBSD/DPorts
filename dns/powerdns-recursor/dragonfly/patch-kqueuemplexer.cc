--- kqueuemplexer.cc.orig	2021-11-23 18:39:17 UTC
+++ kqueuemplexer.cc
@@ -28,7 +28,7 @@
 #include <unistd.h>
 #include "misc.hh"
 #include <sys/types.h>
-#if defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__APPLE__)
+#if defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__APPLE__) || defined(__DragonFly__)
 #include <sys/event.h>
 #endif
 #include <sys/time.h>
