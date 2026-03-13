--- deps/v8/src/base/platform/platform-posix.cc.orig	2023-05-16 06:58:20 UTC
+++ deps/v8/src/base/platform/platform-posix.cc
@@ -54,8 +54,10 @@
 #include <mach/mach.h>
 #include <malloc/malloc.h>
 #else
+#ifndef __DragonFly__
 #include <malloc.h>
 #endif
+#endif
 
 #if V8_OS_LINUX
 #include <sys/prctl.h>  // for prctl
@@ -71,7 +73,7 @@
 #include <sys/syscall.h>
 #endif
 
-#if V8_OS_FREEBSD || V8_OS_DARWIN || V8_OS_OPENBSD || V8_OS_SOLARIS
+#if V8_OS_FREEBSD || V8_OS_DARWIN || V8_OS_OPENBSD || V8_OS_SOLARIS || V8_OS_DRAGONFLYBSD
 #define MAP_ANONYMOUS MAP_ANON
 #endif
 
@@ -133,7 +135,7 @@ int GetFlagsForMemoryPermission(OS::Memo
   int flags = MAP_ANONYMOUS;
   flags |= (page_type == PageType::kShared) ? MAP_SHARED : MAP_PRIVATE;
   if (access == OS::MemoryPermission::kNoAccess) {
-#if !V8_OS_AIX && !V8_OS_FREEBSD && !V8_OS_QNX
+#if !V8_OS_AIX && !V8_OS_FREEBSD && !V8_OS_DRAGONFLYBSD && !V8_OS_QNX
     flags |= MAP_NORESERVE;
 #endif  // !V8_OS_AIX && !V8_OS_FREEBSD && !V8_OS_QNX
 #if V8_OS_QNX
@@ -1238,7 +1240,7 @@ void Thread::SetThreadLocal(LocalStorage
 // keep this version in POSIX as most Linux-compatible derivatives will
 // support it. MacOS and FreeBSD are different here.
 #if !defined(V8_OS_FREEBSD) && !defined(V8_OS_DARWIN) && !defined(_AIX) && \
-    !defined(V8_OS_SOLARIS)
+    !defined(V8_OS_SOLARIS) && !defined(V8_OS_DRAGONFLYBSD)
 
 // static
 Stack::StackSlot Stack::ObtainCurrentThreadStackStart() {
