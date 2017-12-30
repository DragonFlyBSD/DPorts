--- os-daq-modules/daq_dump.c.orig	2017-02-08 22:04:18 UTC
+++ os-daq-modules/daq_dump.c
@@ -27,7 +27,7 @@
 #include <stdlib.h>
 #include <string.h>
 
-#if defined(__FreeBSD__) || defined(__OpenBSD__)
+#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined __DragonFly__
 #include <sys/socket.h>
 #endif
 
