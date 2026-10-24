--- src/common/classes/alloc.h.orig	2024-08-08 09:26:44 UTC
+++ src/common/classes/alloc.h
@@ -50,7 +50,7 @@
 
 #include <stdio.h>
 
-#if defined(MVS) || defined(DARWIN) || defined(__clang__)
+#if defined(MVS) || defined(DARWIN) || defined(__clang__) || defined(__DragonFly__)
 #include <stdlib.h>
 #else
 #include <malloc.h>
