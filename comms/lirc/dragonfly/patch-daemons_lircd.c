--- daemons/lircd.c.orig	2026-11-06 07:28:29 UTC
+++ daemons/lircd.c
@@ -63,7 +63,7 @@
 #include "input_map.h"
 #endif
 
-#if defined __APPLE__  || defined __FreeBSD__
+#if defined __APPLE__  || defined __FreeBSD__ || defined __DragonFly__
 #include <sys/ioctl.h>
 #endif
 
