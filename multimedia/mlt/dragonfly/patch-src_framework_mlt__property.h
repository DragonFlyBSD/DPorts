--- src/framework/mlt_property.h.orig	2013-06-03 03:34:35.000000000 +0000
+++ src/framework/mlt_property.h
@@ -32,7 +32,10 @@
 #include <sys/param.h>
 #endif
 
-#if defined(__GLIBC__) || defined(__DARWIN__) || (__FreeBSD_version >= 900506)
+#if defined(__GLIBC__) || defined(__DARWIN__) \
+ || (defined(__FreeBSD__) && __FreeBSD_version >= 900506) \
+ || (defined(__DragonFly__) && __DragonFly_version > 300502)
+#include <wchar.h>
 #include <xlocale.h>
 #else
 typedef void* locale_t;
