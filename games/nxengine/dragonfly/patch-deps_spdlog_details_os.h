--- deps/spdlog/details/os.h.orig	2021-07-08 10:48:08 UTC
+++ deps/spdlog/details/os.h
@@ -53,6 +53,10 @@
 #define __has_feature(x) 0 // Compatibility with non-clang compilers.
 #endif
 
+#ifdef __DragonFly__
+#include <sys/syscall.h>
+#endif
+
 namespace spdlog {
 namespace details {
 namespace os {
@@ -227,7 +231,7 @@ inline size_t filesize(FILE *f)
 #else // unix
     int fd = fileno(f);
 // 64 bits(but not in osx or cygwin, where fstat64 is deprecated)
-#if !defined(__FreeBSD__) && !defined(__APPLE__) && (defined(__x86_64__) || defined(__ppc64__)) && !defined(__CYGWIN__) && !defined(__HAIKU__)
+#if !defined(__FreeBSD__) && !defined(__APPLE__) && (defined(__x86_64__) || defined(__ppc64__)) && !defined(__CYGWIN__) && !defined(__HAIKU__) && !defined(__DragonFly__)
     struct stat64 st;
     if (fstat64(fd, &st) == 0)
     {
@@ -326,6 +330,8 @@ inline size_t _thread_id() SPDLOG_NOEXCE
     long tid;
     thr_self(&tid);
     return static_cast<size_t>(tid);
+#elif __DragonFly__
+    return static_cast<size_t>(syscall(SYS_lwp_gettid));
 #elif __APPLE__
     uint64_t tid;
     pthread_threadid_np(nullptr, &tid);
