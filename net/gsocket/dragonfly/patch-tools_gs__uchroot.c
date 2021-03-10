--- tools/gs_uchroot.c.orig	2021-02-18 14:40:57 UTC
+++ tools/gs_uchroot.c
@@ -493,7 +493,7 @@ thc_stat(const char *fname, const char *
 	return thc_funcintfv(fname, path, buf, 1);
 }
 
-#if !defined(IS_SOL11) && !defined(__FreeBSD__)
+#if !defined(IS_SOL11) && !defined(__FreeBSD__) && !defined(__DragonFly__)
 int stat64(const char *path, struct stat64 *buf) {return thc_stat(__func__, path, buf); }
 #endif
 
@@ -511,7 +511,7 @@ thc_lstat(const char *fname, const char
 }
 
 #ifndef __CYGWIN__
-#if !defined(IS_SOL11) && !defined(__FreeBSD__)
+#if !defined(IS_SOL11) && !defined(__FreeBSD__) && !defined(__DragonFly__)
 int lstat64(const char *path, struct stat64 *buf) {return thc_lstat(__func__, path, buf); }
 #endif
 
