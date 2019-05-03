--- include/spdlog/details/os.h.orig	2019-01-18 10:13:07 UTC
+++ include/spdlog/details/os.h
@@ -40,7 +40,7 @@
 #include <fcntl.h>
 #include <unistd.h>
 
-#ifdef __linux__
+#if defined(__linux__) || defined(__DragonFly__)
 #include <sys/syscall.h> //Use gettid() syscall under linux to get thread id
 
 #elif __FreeBSD__
@@ -227,7 +227,7 @@ inline size_t filesize(FILE *f)
 #else // unix
     int fd = fileno(f);
 // 64 bits(but not in osx or cygwin, where fstat64 is deprecated)
-#if !defined(__FreeBSD__) && !defined(__APPLE__) && (defined(__x86_64__) || defined(__ppc64__)) && !defined(__CYGWIN__)
+#if !defined(__DragonFly__) && !defined(__FreeBSD__) && !defined(__APPLE__) && (defined(__x86_64__) || defined(__ppc64__)) && !defined(__CYGWIN__)
     struct stat64 st;
     if (fstat64(fd, &st) == 0)
     {
@@ -322,6 +322,8 @@ inline size_t _thread_id() SPDLOG_NOEXCE
 #define SYS_gettid __NR_gettid
 #endif
     return static_cast<size_t>(syscall(SYS_gettid));
+#elif __DragonFly__
+    return static_cast<size_t>(syscall(SYS_lwp_gettid));
 #elif __FreeBSD__
     long tid;
     thr_self(&tid);
