--- src/cguittfont/irrUString.h.orig	2015-02-18 19:50:37.000000000 +0200
+++ src/cguittfont/irrUString.h
@@ -47,7 +47,7 @@
 #define __BIG_ENDIAN 1
 #elif defined(__MACH__) && defined(__APPLE__)
 #include <machine/endian.h>
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/endian.h>
 #else
 #include <endian.h>
