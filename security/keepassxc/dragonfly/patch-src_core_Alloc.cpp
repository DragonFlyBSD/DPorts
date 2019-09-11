--- src/core/Alloc.cpp.orig	2019-09-07 13:01:04 UTC
+++ src/core/Alloc.cpp
@@ -20,6 +20,7 @@
 #include <sodium.h>
 #if defined(Q_OS_MACOS)
 #include <malloc/malloc.h>
+#elif defined(__DragonFly__)
 #elif defined(Q_OS_FREEBSD)
 #include <malloc_np.h>
 #else
@@ -63,7 +64,7 @@ void operator delete(void* ptr) noexcept
     ::operator delete(ptr, _msize(ptr));
 #elif defined(Q_OS_MACOS)
     ::operator delete(ptr, malloc_size(ptr));
-#elif defined(Q_OS_UNIX)
+#elif defined(Q_OS_UNIX) && !defined(__DragonFly__)
     ::operator delete(ptr, malloc_usable_size(ptr));
 #else
     // whatever OS this is, give up and simply free stuff
