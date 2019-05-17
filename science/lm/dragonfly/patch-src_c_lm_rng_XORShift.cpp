--- src/c/lm/rng/XORShift.cpp.intermediate	2019-05-11 06:46:38.000000000 +0000
+++ src/c/lm/rng/XORShift.cpp
@@ -43,7 +43,7 @@
 #include "lm/rng/XORShift.h"
 
 // sincos doesn't exist on all current (2018-08) FreeBSD versions
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #  define sincos(x,s,c) *s = sin(x); *c = cos(x);
 #endif
 
