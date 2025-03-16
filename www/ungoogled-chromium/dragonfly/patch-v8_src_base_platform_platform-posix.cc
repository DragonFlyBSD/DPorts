diff --git v8/src/base/platform/platform-posix.cc v8/src/base/platform/platform-posix.cc
index ba56d5afc708..a1849aa2b182 100644
--- v8/src/base/platform/platform-posix.cc
+++ v8/src/base/platform/platform-posix.cc
@@ -72,7 +72,7 @@
 #include <sys/syscall.h>
 #endif
 
-#if V8_OS_FREEBSD || V8_OS_DARWIN || V8_OS_BSD || V8_OS_SOLARIS
+#if V8_OS_FREEBSD || V8_OS_MACOSX || V8_OS_BSD || V8_OS_SOLARIS || V8_OS_DRAGONFLYBSD
 #define MAP_ANONYMOUS MAP_ANON
 #endif
 
@@ -137,9 +137,9 @@ int GetFlagsForMemoryPermission(OS::MemoryPermission access,
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
@@ -1334,7 +1334,7 @@ void Thread::SetThreadLocal(LocalStorageKey key, void* value) {
 // keep this version in POSIX as most Linux-compatible derivatives will
 // support it. MacOS and FreeBSD are different here.
 #if !defined(V8_OS_FREEBSD) && !defined(V8_OS_DARWIN) && !defined(_AIX) && \
-    !defined(V8_OS_SOLARIS) && !defined(V8_OS_OPENBSD)
+    !defined(V8_OS_SOLARIS) && !defined(V8_OS_OPENBSD) && !defined(V8_OS_DRAGONFLYBSD)
 
 namespace {
 #if DEBUG
