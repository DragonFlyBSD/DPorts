--- include/spdlog/details/os.h.orig	2019-01-18 10:13:07 UTC
+++ include/spdlog/details/os.h
@@ -227,7 +227,7 @@ inline size_t filesize(FILE *f)
 #else // unix
     int fd = fileno(f);
 // 64 bits(but not in osx or cygwin, where fstat64 is deprecated)
-#if !defined(__FreeBSD__) && !defined(__APPLE__) && (defined(__x86_64__) || defined(__ppc64__)) && !defined(__CYGWIN__)
+#if !defined(__DragonFly__) && !defined(__FreeBSD__) && !defined(__APPLE__) && (defined(__x86_64__) || defined(__ppc64__)) && !defined(__CYGWIN__)
     struct stat64 st;
     if (fstat64(fd, &st) == 0)
     {
