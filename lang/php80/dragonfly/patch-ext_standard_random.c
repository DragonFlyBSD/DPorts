--- ext/standard/random.c.orig	2020-10-13 21:58:13 UTC
+++ ext/standard/random.c
@@ -29,9 +29,9 @@
 #ifdef __linux__
 # include <sys/syscall.h>
 #endif
-#if defined(__OpenBSD__) || defined(__NetBSD__) || defined(__FreeBSD__)
+#if defined(__OpenBSD__) || defined(__NetBSD__) || defined(__FreeBSD__) || defined(__DragonFly__)
 # include <sys/param.h>
-# if __FreeBSD__ && __FreeBSD_version > 1200000
+# if (__FreeBSD__ && __FreeBSD_version > 120000) || defined(__DragonFly__)
 #  include <sys/random.h>
 # endif
 #endif
@@ -99,7 +99,7 @@ PHPAPI int php_random_bytes(void *bytes,
 #else
 	size_t read_bytes = 0;
 	ssize_t n;
-#if (defined(__linux__) && defined(SYS_getrandom)) || (defined(__FreeBSD__) && __FreeBSD_version >= 1200000)
+#if (defined(__linux__) && defined(SYS_getrandom)) || (defined(__FreeBSD__) && __FreeBSD_version >= 1200000) || defined(__DragonFly__)
 	/* Linux getrandom(2) syscall or FreeBSD getrandom(2) function*/
 	/* Keep reading until we get enough entropy */
 	while (read_bytes < size) {
