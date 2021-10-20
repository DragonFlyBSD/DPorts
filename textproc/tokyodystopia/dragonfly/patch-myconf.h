--- myconf.h.orig	2010-08-05 09:24:53.000000000 +0300
+++ myconf.h
@@ -29,6 +29,11 @@
 #define _SYS_LINUX_
 #define TDSYSNAME   "Linux"
 
+#elif defined(__DragonFly__)
+
+#define _SYS_DRAGONFLY_
+#define TDSYSNAME   "DragonFly"
+
 #elif defined(__FreeBSD__)
 
 #define _SYS_FREEBSD_
