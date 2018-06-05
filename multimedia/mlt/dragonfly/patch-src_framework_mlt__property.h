--- src/framework/mlt_property.h.orig	2018-01-23 06:41:00 UTC
+++ src/framework/mlt_property.h
@@ -32,7 +32,8 @@
 
 #if defined(__GLIBC__) && !defined(__APPLE__)
 #  include <locale.h>
-#elif defined(__APPLE__) || (__FreeBSD_version >= 900506)
+#elif defined(__APPLE__) || defined (__DragonFly__)
+#  include <wchar.h>
 #  include <xlocale.h>
 #else
 typedef char* locale_t;
