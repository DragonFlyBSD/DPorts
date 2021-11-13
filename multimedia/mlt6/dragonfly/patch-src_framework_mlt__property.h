--- src/framework/mlt_property.h.orig	2021-04-13 18:06:13 UTC
+++ src/framework/mlt_property.h
@@ -32,7 +32,8 @@
 
 #if (defined(__GLIBC__) && !defined(__APPLE__)) || defined(HAVE_LOCALE_H)
 #  include <locale.h>
-#elif defined(__APPLE__) || (defined(__FreeBSD_version) && __FreeBSD_version >= 900506)
+#elif defined(__APPLE__) || (defined(__FreeBSD_version) && __FreeBSD_version >= 900506) || \
+	defined(__DragonFly__)
 #  include <xlocale.h>
 #elif defined(__OpenBSD__)
 /* XXX matches __nop_locale glue in libc++ */
