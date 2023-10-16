--- deps/v8/src/base/platform/memory.h.orig	2023-05-16 06:58:20 UTC
+++ deps/v8/src/base/platform/memory.h
@@ -20,7 +20,9 @@
 #if V8_OS_DARWIN
 #include <malloc/malloc.h>
 #else  // !V8_OS_DARWIN
+#ifndef __DragonFly__
 #include <malloc.h>
+#endif
 #endif  // !V8_OS_DARWIN
 
 #if (V8_OS_POSIX && !V8_OS_AIX && !V8_OS_SOLARIS) || V8_OS_WIN
