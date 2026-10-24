--- tkrzw_sys_config.h.orig
+++ tkrzw_sys_config.h
@@ -29,6 +29,12 @@
 #define _SYS_FREEBSD_
 #define _SYS_POSIX_
 #define _TKRZW_OSNAME     "FreeBSD"
+
+#elif defined(__DragonFly__)
+
+#define _SYS_DRAGONFLY_
+#define _SYS_POSIX_
+#define _TKRZW_OSNAME     "DragonFly"
 
 #elif defined(__NetBSD__)
 
