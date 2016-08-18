--- src/general.h.orig	2007-04-25 08:32:07.000000000 +0300
+++ src/general.h
@@ -70,13 +70,15 @@
 #ifdef __linux__
 #define UC_SYSTEM_NAME "Linux"
 #include <sys/vfs.h>
-#elif defined(__NetBSD__) || defined(__OpenBSD__) || defined(__FreeBSD__)
+#elif defined(__NetBSD__) || defined(__OpenBSD__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #ifdef __NetBSD__
 #define UC_SYSTEM_NAME "NetBSD"
 #elif __OpenBSD__
 #define UC_SYSTEM_NAME "OpenBSD"
 #elif __FreeBSD__
 #define UC_SYSTEM_NAME "FreeBSD"
+#elif __DragonFly__
+#define UC_SYSTEM_NAME "DragonFly"
 #endif
 #include <sys/param.h>
 #include <sys/mount.h>
