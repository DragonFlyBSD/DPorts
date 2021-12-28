--- launcher.ci.orig	2021-08-17 06:07:24 UTC
+++ launcher.c
@@ -34,7 +34,7 @@ static void cleanup_free(void *p) { free
 #define FREE_AFTER_FUNCTION __attribute__((cleanup(cleanup_free)))
 
 
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 static bool
 safe_realpath(const char* src, char *buf, size_t buf_sz) {
     FREE_AFTER_FUNCTION char* ans = realpath(src, NULL);
@@ -208,7 +208,7 @@ read_exe_path(char *exe, size_t buf_sz)
     if (!safe_realpath(apple, exe, buf_sz)) { fprintf(stderr, "realpath() failed on the executable's path\n"); return false; }
     return true;
 }
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/param.h>
 #include <sys/sysctl.h>
 
