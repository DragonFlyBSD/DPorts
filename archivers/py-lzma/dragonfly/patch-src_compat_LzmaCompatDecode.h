--- src/compat/LzmaCompatDecode.h.orig	2026-02-13 19:17:26 UTC
+++ src/compat/LzmaCompatDecode.h
@@ -42,6 +42,8 @@
 #ifndef malloc
 # ifdef __APPLE__
 #include <malloc/malloc.h>
+# elif defined(__DragonFly__)
+#include <stdlib.h>
 # else
 #include <malloc.h>
 # endif
