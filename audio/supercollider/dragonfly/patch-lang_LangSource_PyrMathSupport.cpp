--- lang/LangSource/PyrMathSupport.cpp.orig	2020-04-01 20:16:41 UTC
+++ lang/LangSource/PyrMathSupport.cpp
@@ -26,7 +26,7 @@
 #include <stdlib.h>
 #include <math.h>
 
-#if defined(__FreeBSD__) || defined(__NetBSD__)
+#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 #    include <complex.h>
 #endif
 
