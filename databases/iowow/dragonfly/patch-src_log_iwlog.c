--- src/log/iwlog.c.orig	2022-02-14 12:24:37 UTC
+++ src/log/iwlog.c
@@ -39,7 +39,7 @@
 #include <time.h>
 #include <limits.h>
 
-#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__ANDROID__) || !_GNU_SOURCE
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__) || defined(__ANDROID__) || !_GNU_SOURCE
 #include <libgen.h>
 #elif defined(_WIN32)
 #include <libiberty/libiberty.h>
