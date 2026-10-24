--- deps/v8/src/base/platform/memory.h.intermediate	2026-09-07 01:09:07 UTC
+++ deps/v8/src/base/platform/memory.h
@@ -24,10 +24,12 @@
 #elif V8_OS_ZOS
 #include <stdlib.h>
 #else
+#ifndef __DragonFly__
 #include <malloc.h>
 #endif
+#endif
 
-#if (V8_OS_POSIX && !V8_OS_AIX && !V8_OS_SOLARIS && !V8_OS_ZOS && !V8_OS_OPENBSD) || V8_OS_WIN
+#if (V8_OS_POSIX && !V8_OS_AIX && !V8_OS_SOLARIS && !V8_OS_ZOS && !V8_OS_OPENBSD && !V8_OS_DRAGONFLYBSD) || V8_OS_WIN
 #define V8_HAS_MALLOC_USABLE_SIZE 1
 #endif
 
