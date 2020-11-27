--- input-files.c.intermediate	2020-11-27 13:54:17.000000000 +0000
+++ input-files.c
@@ -48,7 +48,7 @@ FILE * f_subr_open(const char * fname, c
 #ifdef __MINGW32__
 		return fopen64(fname, mode);
 #else
-#if defined(__LP64__) || defined(_LP64) || defined(MACOS) || defined(__FreeBSD__)
+#if defined(__LP64__) || defined(_LP64) || defined(MACOS) || defined(__FreeBSD__) || defined(__DragonFly__)
 		return fopen(fname, mode);
 #else
 		return fopen64(fname, mode);
