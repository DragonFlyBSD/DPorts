--- src/random.cpp.orig	2020-03-18 12:46:39 UTC
+++ src/random.cpp
@@ -91,7 +91,8 @@ uint64_t get_random_seed(uint64_t seed)
 
 #define STRERROR_BUFSIZE_ 256
 
-#if defined(__APPLE__) || defined(__FreeBSD__) || !defined(_GNU_SOURCE) || !defined(__GLIBC__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || !defined(_GNU_SOURCE) || !defined(__GLIBC__) || \
+  defined(__DragonFly__)
 #define STRERROR_R_(errno, buf, bufsize) (strerror_r(errno, buf, bufsize), buf)
 #else
 #define STRERROR_R_(errno, buf, bufsize) strerror_r(errno, buf, bufsize)
