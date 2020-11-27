--- src/random/fastfunc.h.intermediate	2020-11-27 13:52:05.000000000 +0000
+++ src/random/fastfunc.h
@@ -27,7 +27,7 @@
 #include <cmath>
 #include <vector>
 
-#if !defined(__APPLE__) && !defined(__FreeBSD__)
+#if !defined(__APPLE__) && !defined(__FreeBSD__) && !defined(__DragonFly__)
 #include <malloc.h>
 #endif
 
