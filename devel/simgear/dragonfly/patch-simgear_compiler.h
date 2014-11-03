--- simgear/compiler.h.orig	2014-08-17 13:40:41.000000000 +0000
+++ simgear/compiler.h
@@ -159,16 +159,6 @@ inline int (isnan)(double r) { return !(
 #  endif
 #endif
 
-#if defined (__FreeBSD__)
-#  define SG_UNIX
-#include <sys/param.h>
-#  if __FreeBSD_version < 500000
-     extern "C" {
-       inline int isnan(double r) { return !(r <= 0 || r >= 0); }
-     }
-#  endif
-#endif
-
 #if defined (__CYGWIN__)
 #  define SG_WINDOWS
 #  define SG_UNIX
