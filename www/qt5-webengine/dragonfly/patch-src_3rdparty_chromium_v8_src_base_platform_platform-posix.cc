--- src/3rdparty/chromium/v8/src/base/platform/platform-posix.cc.orig	2021-02-02 18:53:15 UTC
+++ src/3rdparty/chromium/v8/src/base/platform/platform-posix.cc
@@ -65,7 +65,7 @@
 #include <sys/syscall.h>
 #endif
 
-#if V8_OS_FREEBSD || V8_OS_MACOSX || V8_OS_OPENBSD || V8_OS_SOLARIS
+#if V8_OS_FREEBSD || V8_OS_MACOSX || V8_OS_OPENBSD || V8_OS_SOLARIS || V8_OS_DRAGONFLYBSD
 #define MAP_ANONYMOUS MAP_ANON
 #endif
 
@@ -134,7 +134,7 @@ int GetProtectionFromMemoryPermission(OS
 int GetFlagsForMemoryPermission(OS::MemoryPermission access) {
   int flags = MAP_PRIVATE | MAP_ANONYMOUS;
   if (access == OS::MemoryPermission::kNoAccess) {
-#if !V8_OS_AIX && !V8_OS_FREEBSD && !V8_OS_QNX
+#if !V8_OS_AIX && !V8_OS_FREEBSD && !V8_OS_QNX && !V8_OS_DRAGONFLYBSD
     flags |= MAP_NORESERVE;
 #endif  // !V8_OS_AIX && !V8_OS_FREEBSD && !V8_OS_QNX
 #if V8_OS_QNX
@@ -433,7 +433,7 @@ bool OS::DiscardSystemPages(void* addres
 
 // static
 bool OS::HasLazyCommits() {
-#if V8_OS_AIX || V8_OS_LINUX || V8_OS_MACOSX || V8_OS_FREEBSD
+#if V8_OS_AIX || V8_OS_LINUX || V8_OS_MACOSX || V8_OS_FREEBSD || V8_OS_DRAGONFLYBSD
   return true;
 #else
   // TODO(bbudge) Return true for all POSIX platforms.
@@ -976,7 +976,7 @@ void Thread::SetThreadLocal(LocalStorage
 // pthread_getattr_np used below is non portable (hence the _np suffix). We
 // keep this version in POSIX as most Linux-compatible derivatives will
 // support it. MacOS and FreeBSD are different here.
-#if !defined(V8_OS_FREEBSD) && !defined(V8_OS_MACOSX)
+#if !defined(V8_OS_FREEBSD) && !defined(V8_OS_MACOSX) && !defined(V8_OS_DRAGONFLYBSD)
 
 // static
 void* Stack::GetStackStart() {
