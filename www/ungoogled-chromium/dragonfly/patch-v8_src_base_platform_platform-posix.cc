diff --git v8/src/base/platform/platform-posix.cc v8/src/base/platform/platform-posix.cc
index 4e00df08f81..e5ece020c4d 100644
--- v8/src/base/platform/platform-posix.cc
+++ v8/src/base/platform/platform-posix.cc
@@ -73,7 +73,7 @@
 #include <sys/syscall.h>
 #endif
 
-#if V8_OS_FREEBSD || V8_OS_DARWIN || V8_OS_BSD || V8_OS_SOLARIS
+#if V8_OS_FREEBSD || V8_OS_MACOSX || V8_OS_BSD || V8_OS_SOLARIS || V8_OS_DRAGONFLYBSD
 #define MAP_ANONYMOUS MAP_ANON
 #endif
 
@@ -135,9 +135,9 @@ int GetFlagsForMemoryPermission(OS::MemoryPermission access,
   int flags = MAP_ANONYMOUS;
   flags |= (page_type == PageType::kShared) ? MAP_SHARED : MAP_PRIVATE;
   if (access == OS::MemoryPermission::kNoAccess) {
-#if !V8_OS_AIX && !V8_OS_FREEBSD && !V8_OS_QNX
+#if !V8_OS_AIX && !V8_OS_FREEBSD && !V8_OS_QNX && !V8_OS_DRAGONFLYBSD
     flags |= MAP_NORESERVE;
-#endif  // !V8_OS_AIX && !V8_OS_FREEBSD && !V8_OS_QNX
+#endif  // !V8_OS_AIX && !V8_OS_FREEBSD && !V8_OS_QNX && !V8_OS_DRAGONFLYBSD
 #if V8_OS_QNX
     flags |= MAP_LAZY;
 #endif  // V8_OS_QNX
@@ -1289,7 +1289,7 @@ void Thread::SetThreadLocal(LocalStorageKey key, void* value) {
 // keep this version in POSIX as most Linux-compatible derivatives will
 // support it. MacOS and FreeBSD are different here.
 #if !defined(V8_OS_FREEBSD) && !defined(V8_OS_DARWIN) && !defined(_AIX) && \
-    !defined(V8_OS_SOLARIS) && !defined(V8_OS_OPENBSD)
+    !defined(V8_OS_SOLARIS) && !defined(V8_OS_OPENBSD) && !defined(V8_OS_DRAGONFLYBSD)
 
 namespace {
 #if DEBUG
