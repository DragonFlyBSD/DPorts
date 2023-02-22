--- src/framework/mlt_property.h.orig	2022-11-01 10:30:41 UTC
+++ src/framework/mlt_property.h
@@ -25,14 +25,14 @@
 
 #include "mlt_types.h"
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__)  || defined(__DragonFly__)
 /* This header has existed since 1994 and defines __FreeBSD_version below. */
 #include <sys/param.h>
 #endif
 
 #if (defined(__linux__) && !defined(__APPLE__))
 #  include <locale.h>
-#elif defined(__APPLE__) || (defined(__FreeBSD_version) && __FreeBSD_version >= 900506)
+#elif defined(__APPLE__) || (defined(__FreeBSD_version) && __FreeBSD_version >= 900506) || defined(__DragonFly__)
 #  include <xlocale.h>
 #elif defined(__OpenBSD__)
 /* XXX matches __nop_locale glue in libc++ */
