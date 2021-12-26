--- src/log/iwlog.c.orig	2021-09-03 09:03:05 UTC
+++ src/log/iwlog.c
@@ -39,7 +39,7 @@
 #include <time.h>
 #include <limits.h>
 
-#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__ANDROID__) || !_GNU_SOURCE
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__) || defined(__ANDROID__) || !_GNU_SOURCE
 #include <libgen.h>
 #elif defined(_WIN32)
 #include <libiberty/libiberty.h>
@@ -329,7 +329,7 @@ static iwrc _default_logfn(
     if (!rci) {
       errno_msg = ebuf;
     }
-#elif defined(__APPLE__) || defined(__FreeBSD__) || defined(__ANDROID__) || ((  _POSIX_C_SOURCE >= 200112L \
+#elif defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__) || defined(__ANDROID__) || ((  _POSIX_C_SOURCE >= 200112L \
                                                                              || _XOPEN_SOURCE >= 600) && !_GNU_SOURCE)
     int rci = strerror_r(errno_code, ebuf, EBUF_SZ);
     if (!rci) {
