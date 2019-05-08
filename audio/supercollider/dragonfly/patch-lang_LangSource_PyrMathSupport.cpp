--- lang/LangSource/PyrMathSupport.cpp.orig	2018-03-28 20:05:07 UTC
+++ lang/LangSource/PyrMathSupport.cpp
@@ -26,7 +26,7 @@
 #include <stdlib.h>
 #include <math.h>
 
-#if defined(__FreeBSD__) || defined(__NetBSD__)
+#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 # include <complex.h>
 #endif
 
