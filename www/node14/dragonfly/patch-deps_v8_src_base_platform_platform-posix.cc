--- deps/v8/src/base/platform/platform-posix.cc.orig	2021-02-09 14:11:20 UTC
+++ deps/v8/src/base/platform/platform-posix.cc
@@ -134,7 +134,7 @@ int GetProtectionFromMemoryPermission(OS
 int GetFlagsForMemoryPermission(OS::MemoryPermission access) {
   int flags = MAP_PRIVATE | MAP_ANONYMOUS;
   if (access == OS::MemoryPermission::kNoAccess) {
-#if !V8_OS_AIX && !V8_OS_FREEBSD && !V8_OS_QNX
+#if !V8_OS_AIX && !V8_OS_FREEBSD && !V8_OS_QNX && !__DragonFly__
     flags |= MAP_NORESERVE;
 #endif  // !V8_OS_AIX && !V8_OS_FREEBSD && !V8_OS_QNX
 #if V8_OS_QNX
@@ -769,7 +769,7 @@ Thread::~Thread() {
 
 
 static void SetThreadName(const char* name) {
-#if V8_OS_DRAGONFLYBSD || V8_OS_FREEBSD || V8_OS_OPENBSD
+#if V8_OS_DRAGONFLYBSD || V8_OS_FREEBSD || V8_OS_OPENBSD || __DragonFly__
   pthread_set_name_np(pthread_self(), name);
 #elif V8_OS_NETBSD
   STATIC_ASSERT(Thread::kMaxThreadNameLength <= PTHREAD_MAX_NAMELEN_NP);
@@ -970,7 +970,7 @@ void Thread::SetThreadLocal(LocalStorage
 // pthread_getattr_np used below is non portable (hence the _np suffix). We
 // keep this version in POSIX as most Linux-compatible derivatives will
 // support it. MacOS and FreeBSD are different here.
-#if !defined(V8_OS_FREEBSD) && !defined(V8_OS_MACOSX) && !defined(_AIX) && \
+#if !defined(__DragonFly__) && !defined(V8_OS_FREEBSD) && !defined(V8_OS_MACOSX) && !defined(_AIX) && \
     !defined(V8_OS_SOLARIS)
 
 // static
