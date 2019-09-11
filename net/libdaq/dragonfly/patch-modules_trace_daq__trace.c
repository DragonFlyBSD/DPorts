--- modules/trace/daq_trace.c.orig	2019-06-30 04:26:28 UTC
+++ modules/trace/daq_trace.c
@@ -28,7 +28,7 @@
 #include <stdlib.h>
 #include <string.h>
 
-#if defined(__FreeBSD__) || defined(__OpenBSD__)
+#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 #include <sys/socket.h>
 #endif
 
