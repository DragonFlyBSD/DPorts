--- deps/v8/src/base/platform/platform-posix.cc.intermediate	2026-09-07 01:09:07 UTC
+++ deps/v8/src/base/platform/platform-posix.cc
@@ -59,8 +59,10 @@
 #elif V8_OS_OPENBSD
 #include <sys/malloc.h>
 #elif !V8_OS_ZOS
+#ifndef __DragonFly__
 #include <malloc.h>
 #endif
+#endif
 
 #if V8_OS_LINUX
 #include <sys/prctl.h>  // for prctl
@@ -76,7 +78,7 @@
 #include <sys/syscall.h>
 #endif
 
-#if V8_OS_FREEBSD || V8_OS_DARWIN || V8_OS_OPENBSD || V8_OS_SOLARIS
+#if V8_OS_FREEBSD || V8_OS_DARWIN || V8_OS_OPENBSD || V8_OS_SOLARIS || V8_OS_DRAGONFLYBSD
 #define MAP_ANONYMOUS MAP_ANON
 #endif
 
@@ -153,7 +155,7 @@ int GetFlagsForMemoryPermission(OS::MemoryPermission a
   flags |= (page_type == PageType::kShared) ? MAP_SHARED : MAP_PRIVATE;
   if (access == OS::MemoryPermission::kNoAccess ||
       access == OS::MemoryPermission::kNoAccessWillJitLater) {
-#if !V8_OS_AIX && !V8_OS_FREEBSD && !V8_OS_QNX
+#if !V8_OS_AIX && !V8_OS_FREEBSD && !V8_OS_DRAGONFLYBSD && !V8_OS_QNX
     flags |= MAP_NORESERVE;
 #endif  // !V8_OS_AIX && !V8_OS_FREEBSD && !V8_OS_QNX
 #if V8_OS_QNX
@@ -1361,7 +1363,7 @@ void Thread::SetThreadLocal(LocalStorageKey key, void*
 // keep this version in POSIX as most Linux-compatible derivatives will
 // support it. MacOS and FreeBSD are different here.
 #if !defined(V8_OS_FREEBSD) && !defined(V8_OS_DARWIN) && !defined(_AIX) && \
-    !defined(V8_OS_SOLARIS)
+    !defined(V8_OS_SOLARIS) && !defined(V8_OS_DRAGONFLYBSD)
 
 namespace {
 #if DEBUG
@@ -1425,7 +1427,7 @@ Stack::StackSlot Stack::ObtainCurrentThreadStackStart(
 }
 
 #endif  // !defined(V8_OS_FREEBSD) && !defined(V8_OS_DARWIN) &&
-        // !defined(_AIX) && !defined(V8_OS_SOLARIS)
+        // !defined(_AIX) && !defined(V8_OS_SOLARIS) && !defined(V8_OS_DRAGONFLYBSD)
 
 // static
 Stack::StackSlot Stack::GetCurrentStackPosition() {
