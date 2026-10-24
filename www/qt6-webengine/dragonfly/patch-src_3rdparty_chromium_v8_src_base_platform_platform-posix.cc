--- src/3rdparty/chromium/v8/src/base/platform/platform-posix.cc.intermediate	2026-09-17 10:33:48 UTC
+++ src/3rdparty/chromium/v8/src/base/platform/platform-posix.cc
@@ -60,7 +60,7 @@
 #include <malloc/malloc.h>
 #elif V8_OS_OPENBSD
 #include <sys/malloc.h>
-#elif !V8_OS_ZOS
+#elif !V8_OS_ZOS && !V8_OS_DRAGONFLYBSD
 #include <malloc.h>
 #endif
 
@@ -143,9 +143,9 @@ int GetFlagsForMemoryPermission(OS::MemoryPermission a
   flags |= (page_type == PageType::kShared) ? MAP_SHARED : MAP_PRIVATE;
   if (access == OS::MemoryPermission::kNoAccess ||
       access == OS::MemoryPermission::kNoAccessWillJitLater) {
-#if !V8_OS_AIX && !V8_OS_FREEBSD && !V8_OS_QNX
+#if !V8_OS_AIX && !V8_OS_FREEBSD && !V8_OS_QNX && !V8_OS_DRAGONFLYBSD
     flags |= MAP_NORESERVE;
-#endif  // !V8_OS_AIX && !V8_OS_FREEBSD && !V8_OS_QNX
+#endif  // !V8_OS_AIX && !V8_OS_FREEBSD && !V8_OS_QNX && !V8_OS_DRAGONFLYBSD
 #if V8_OS_QNX
     flags |= MAP_LAZY;
 #endif  // V8_OS_QNX
@@ -1396,7 +1396,7 @@ void Thread::SetThreadLocal(LocalStorageKey key, void*
 // keep this version in POSIX as most Linux-compatible derivatives will
 // support it. MacOS and FreeBSD are different here.
 #if !defined(V8_OS_FREEBSD) && !defined(V8_OS_DARWIN) && !defined(_AIX) && \
-    !defined(V8_OS_SOLARIS) && !defined(V8_OS_OPENBSD)
+    !defined(V8_OS_SOLARIS) && !defined(V8_OS_OPENBSD) && !defined(V8_OS_DRAGONFLYBSD)
 
 namespace {
 #if DEBUG
