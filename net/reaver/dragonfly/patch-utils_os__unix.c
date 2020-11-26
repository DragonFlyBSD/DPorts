--- utils/os_unix.c.orig	2020-03-16 16:42:21 UTC
+++ utils/os_unix.c
@@ -271,7 +271,7 @@ int os_setenv(const char *name, const ch
 
 int os_unsetenv(const char *name)
 {
-#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__APPLE__) || \
+#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__APPLE__) || defined(__DragonFly__) || \
     defined(__OpenBSD__)
 	unsetenv(name);
 	return 0;
