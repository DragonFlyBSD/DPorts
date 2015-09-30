--- canna/widedef.h.orig	2003-12-27 19:15:20.000000000 +0200
+++ canna/widedef.h
@@ -52,7 +52,7 @@
 #  include <stddef.h>
 #  define _WCHAR_T
 # endif
-#elif defined(__FreeBSD__) && __FreeBSD_version >= 500000
+#elif (defined(__FreeBSD__) && __FreeBSD_version >= 500000) || defined(__DragonFly__)
 # ifdef WCHAR16
 typedef unsigned short wchar_t;
 #  define _WCHAR_T_DECLARED
