--- src/cguittfont/irrUString.h.orig	2016-04-30 06:49:46 UTC
+++ src/cguittfont/irrUString.h
@@ -47,7 +47,7 @@
 #define __BIG_ENDIAN 1
 #elif __MACH__
 #include <machine/endian.h>
-#elif __FreeBSD__
+#elif defined (__FreeBSD__) || defined(__DragonFly__)
 #include <machine/endian.h>
 #else
 #include <endian.h>
