--- deps/v8/src/base/platform/platform-posix.cc.orig	2021-04-06 13:51:26 UTC
+++ deps/v8/src/base/platform/platform-posix.cc
@@ -64,7 +64,7 @@
 #include <sys/syscall.h>
 #endif
 
-#if V8_OS_FREEBSD || V8_OS_MACOSX || V8_OS_OPENBSD || V8_OS_SOLARIS
+#if V8_OS_FREEBSD || V8_OS_MACOSX || V8_OS_OPENBSD || V8_OS_SOLARIS || V8_OS_DRAGONFLYBSD
 #define MAP_ANONYMOUS MAP_ANON
 #endif
 
@@ -127,7 +127,7 @@ int GetProtectionFromMemoryPermission(OS
 int GetFlagsForMemoryPermission(OS::MemoryPermission access) {
   int flags = MAP_PRIVATE | MAP_ANONYMOUS;
   if (access == OS::MemoryPermission::kNoAccess) {
-#if !V8_OS_AIX && !V8_OS_FREEBSD && !V8_OS_QNX
+#if !V8_OS_AIX && !V8_OS_FREEBSD && !V8_OS_QNX && !V8_OS_DRAGONFLYBSD
     flags |= MAP_NORESERVE;
 #endif  // !V8_OS_AIX && !V8_OS_FREEBSD && !V8_OS_QNX
 #if V8_OS_QNX
@@ -704,7 +704,7 @@ Thread::~Thread() {
 
 
 static void SetThreadName(const char* name) {
-#if V8_OS_DRAGONFLYBSD || V8_OS_FREEBSD || V8_OS_OPENBSD
+#if V8_OS_DRAGONFLYBSD || V8_OS_FREEBSD || V8_OS_OPENBSD || V8_OS_DRAGONFLYBSD
   pthread_set_name_np(pthread_self(), name);
 #elif V8_OS_NETBSD
   STATIC_ASSERT(Thread::kMaxThreadNameLength <= PTHREAD_MAX_NAMELEN_NP);
