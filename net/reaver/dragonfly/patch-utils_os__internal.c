--- utils/os_internal.c.orig	2020-03-16 16:42:21 UTC
+++ utils/os_internal.c
@@ -178,7 +178,7 @@ int os_setenv(const char *name, const ch
 
 int os_unsetenv(const char *name)
 {
-#if defined(__FreeBSD__) || defined(__NetBSD__)
+#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 	unsetenv(name);
 	return 0;
 #else
