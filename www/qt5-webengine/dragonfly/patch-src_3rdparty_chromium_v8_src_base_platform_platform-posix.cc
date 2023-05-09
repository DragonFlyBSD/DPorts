--- src/3rdparty/chromium/v8/src/base/platform/platform-posix.cc.orig	2023-05-07 23:06:24 UTC
+++ src/3rdparty/chromium/v8/src/base/platform/platform-posix.cc
@@ -65,7 +65,7 @@
 #include <sys/syscall.h>
 #endif
 
-#if V8_OS_FREEBSD || V8_OS_MACOSX || V8_OS_OPENBSD || V8_OS_SOLARIS
+#if V8_OS_FREEBSD || V8_OS_MACOSX || V8_OS_OPENBSD || V8_OS_SOLARIS || V8_OS_DRAGONFLYBSD
 #define MAP_ANONYMOUS MAP_ANON
 #endif
 
@@ -145,7 +145,7 @@ int GetFlagsForMemoryPermission(OS::Memo
   int flags = MAP_ANONYMOUS;
   flags |= (page_type == PageType::kShared) ? MAP_SHARED : MAP_PRIVATE;
   if (access == OS::MemoryPermission::kNoAccess) {
-#if !V8_OS_AIX && !V8_OS_FREEBSD && !V8_OS_QNX
+#if !V8_OS_AIX && !V8_OS_FREEBSD && !V8_OS_QNX && !V8_OS_DRAGONFLYBSD
     flags |= MAP_NORESERVE;
 #endif  // !V8_OS_AIX && !V8_OS_FREEBSD && !V8_OS_QNX
 #if V8_OS_QNX
@@ -466,7 +466,7 @@ bool OS::DiscardSystemPages(void* addres
 
 // static
 bool OS::HasLazyCommits() {
-#if V8_OS_AIX || V8_OS_LINUX || V8_OS_MACOSX || V8_OS_FREEBSD
+#if V8_OS_AIX || V8_OS_LINUX || V8_OS_MACOSX || V8_OS_FREEBSD || V8_OS_DRAGONFLYBSD
   return true;
 #else
   // TODO(bbudge) Return true for all POSIX platforms.
@@ -1008,7 +1008,7 @@ void Thread::SetThreadLocal(LocalStorage
 // keep this version in POSIX as most Linux-compatible derivatives will
 // support it. MacOS and FreeBSD are different here.
 #if !defined(V8_OS_FREEBSD) && !defined(V8_OS_MACOSX) && !defined(_AIX) && \
-    !defined(V8_OS_SOLARIS)
+    !defined(V8_OS_SOLARIS) && !defined(V8_OS_DRAGONFLYBSD)
 
 // static
 void* Stack::GetStackStart() {
