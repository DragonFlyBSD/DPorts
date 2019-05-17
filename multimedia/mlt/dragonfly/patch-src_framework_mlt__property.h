--- src/framework/mlt_property.h.intermediate	2019-05-01 18:19:28 UTC
+++ src/framework/mlt_property.h
@@ -32,7 +32,7 @@
 
 #if (defined(__GLIBC__) && !defined(__APPLE__)) || defined(HAVE_LOCALE_H)
 #  include <locale.h>
-#elif defined(__APPLE__) || (defined(__FreeBSD_version) && __FreeBSD_version >= 900506)
+#elif defined(__APPLE__) || defined(__DragonFly__) || (defined(__FreeBSD_version) && __FreeBSD_version >= 900506)
 #  include <xlocale.h>
 #else
 typedef char* locale_t;
