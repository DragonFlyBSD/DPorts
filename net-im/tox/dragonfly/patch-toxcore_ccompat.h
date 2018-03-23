--- toxcore/ccompat.h.orig	2018-03-10 17:40:28 UTC
+++ toxcore/ccompat.h
@@ -22,7 +22,7 @@
 // Emulation using alloca.
 #ifdef _WIN32
 #include <malloc.h>
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #include <stdlib.h>
 #if !defined(alloca) && defined(__GNUC__)
 #define alloca __builtin_alloca
