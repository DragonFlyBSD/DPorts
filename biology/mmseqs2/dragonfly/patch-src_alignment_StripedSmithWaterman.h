--- src/alignment/StripedSmithWaterman.h.orig	2021-02-21 14:03:53 UTC
+++ src/alignment/StripedSmithWaterman.h
@@ -36,7 +36,7 @@
 #include <cstdio>
 #include <cstdlib>
 
-#if !defined(__APPLE__) && !defined(__llvm__)
+#if !defined(__APPLE__) && !defined(__llvm__) && !defined(__DragonFly__)
 #include <malloc.h>
 #endif
 
