--- Utilities/Scale2x/scalebit.cpp.orig	2019-06-25 23:49:22 UTC
+++ Utilities/Scale2x/scalebit.cpp
@@ -39,7 +39,7 @@
 #include <assert.h>
 #include <stdlib.h>
 
-#if !(defined(__MACH__) || defined(__FreeBSD__))
+#if !(defined(__MACH__) || defined(__FreeBSD__) || defined(__DragonFly__))
 #include <malloc.h>
 #endif
 
