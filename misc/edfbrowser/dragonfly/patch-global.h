--- global.h.orig
+++ global.h
@@ -58,7 +58,7 @@
 
 #include <stdio.h>
 
-#if defined(__APPLE__) || defined(__MACH__) || defined(__APPLE_CC__) || defined(__HAIKU__) || defined(__FreeBSD__)
+#if defined(__APPLE__) || defined(__MACH__) || defined(__APPLE_CC__) || defined(__HAIKU__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #define fopeno fopen
 #else
 #define fseeko fseeko64
