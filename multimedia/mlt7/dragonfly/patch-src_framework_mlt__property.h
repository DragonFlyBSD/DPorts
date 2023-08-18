--- src/framework/mlt_property.h.orig	2023-08-17 11:15:36.411795000 +0200
+++ src/framework/mlt_property.h	2023-08-17 11:16:02.352231000 +0200
@@ -25,7 +25,7 @@
 
 #include "mlt_types.h"
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 /* This header has existed since 1994 and defines __FreeBSD_version below. */
 #include <sys/param.h>
 #endif
@@ -33,7 +33,7 @@
 #if (defined(__linux__) && !defined(__APPLE__))
 #include <locale.h>
 typedef locale_t mlt_locale_t;
-#elif defined(__APPLE__) || (defined(__FreeBSD_version) && __FreeBSD_version >= 900506)
+#elif defined(__APPLE__) || (defined(__FreeBSD_version) && __FreeBSD_version >= 900506) || defined(__DragonFly__)
 #include <xlocale.h>
 typedef locale_t mlt_locale_t;
 #elif defined(__OpenBSD__)
