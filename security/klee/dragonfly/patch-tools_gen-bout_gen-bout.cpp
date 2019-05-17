--- tools/gen-bout/gen-bout.cpp.orig	2019-03-19 16:49:16 UTC
+++ tools/gen-bout/gen-bout.cpp
@@ -18,7 +18,7 @@
 
 #include "klee/Internal/ADT/KTest.h"
 
-#if defined(__FreeBSD__) || defined(__minix)
+#if defined(__FreeBSD__) || defined(__minix) || defined(__DragonFly__)
 #define stat64 stat
 #endif
 
