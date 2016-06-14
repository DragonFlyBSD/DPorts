--- src/framework/mlt_property.h.orig	2016-04-21 02:24:55 UTC
+++ src/framework/mlt_property.h
@@ -30,7 +30,9 @@
 #include <sys/param.h>
 #endif
 
-#if defined(__GLIBC__) || defined(__APPLE__) || (__FreeBSD_version >= 900506)
+#if defined(__GLIBC__) || defined(__APPLE__) || defined __DragonFly__ \
+ || (defined(__FreeBSD__) && __FreeBSD_version >= 900506)
+#include <wchar.h>
 #include <xlocale.h>
 #else
 typedef char* locale_t;
