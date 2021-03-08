--- tools/gen-bout/gen-bout.cpp.orig	2020-12-07 15:01:33 UTC
+++ tools/gen-bout/gen-bout.cpp
@@ -18,7 +18,7 @@
 
 #include "klee/ADT/KTest.h"
 
-#if defined(__FreeBSD__) || defined(__minix) || defined(__APPLE__)
+#if defined(__FreeBSD__) || defined(__minix) || defined(__APPLE__) || defined(__DragonFly__)
 #define stat64 stat
 #endif
 
