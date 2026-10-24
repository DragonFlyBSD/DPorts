--- src/common/classes/alloc.h.orig	2024-08-08 08:59:40 UTC
+++ src/common/classes/alloc.h
@@ -50,7 +50,7 @@
 
 #include <stdio.h>
 
-#if defined(MVS) || defined(DARWIN) || defined(__clang__)
+#if defined(MVS) || defined(DARWIN) || defined(__clang__) || defined(FREEBSD)
 #include <stdlib.h>
 #else
 #include <malloc.h>
