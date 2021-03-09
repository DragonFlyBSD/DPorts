--- kqueuemplexer.cc.orig	2020-10-13 09:46:03 UTC
+++ kqueuemplexer.cc
@@ -28,7 +28,7 @@
 #include <unistd.h>
 #include "misc.hh"
 #include <sys/types.h>
-#if defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__NetBSD__)
+#if defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__NetBSD__) || defined(__DragonFly__)
 #include <sys/event.h>
 #endif
 #include <sys/time.h>
