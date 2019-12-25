--- src/core/Alloc.cpp.orig	2019-11-11 19:53:43 UTC
+++ src/core/Alloc.cpp
@@ -21,6 +21,7 @@
 #include <sodium.h>
 #if defined(Q_OS_MACOS)
 #include <malloc/malloc.h>
+#elif defined(__DragonFly__)
 #elif defined(Q_OS_FREEBSD)
 #include <malloc_np.h>
 #elif defined(HAVE_MALLOC_H)
