--- ext/standard/random.c.orig	2021-12-15 02:00:45 UTC
+++ ext/standard/random.c
@@ -31,7 +31,7 @@
 #endif
 #if HAVE_SYS_PARAM_H
 # include <sys/param.h>
-# if (__FreeBSD__ && __FreeBSD_version > 1200000) || (__DragonFly__ && __DragonFly_version >= 500700) || defined(__sun)
+# if (__FreeBSD__ && __FreeBSD_version > 1200000) || defined(__DragonFly__) || defined(__sun)
 #  include <sys/random.h>
 # endif
 #endif
@@ -99,7 +99,7 @@ PHPAPI int php_random_bytes(void *bytes,
 #else
 	size_t read_bytes = 0;
 	ssize_t n;
-#if (defined(__linux__) && defined(SYS_getrandom)) || (defined(__FreeBSD__) && __FreeBSD_version >= 1200000) || (defined(__DragonFly__) && __DragonFly_version >= 500700) || defined(__sun)
+#if (defined(__linux__) && defined(SYS_getrandom)) || (defined(__FreeBSD__) && __FreeBSD_version >= 1200000) || defined(__DragonFly__) || defined(__sun)
 	/* Linux getrandom(2) syscall or FreeBSD/DragonFlyBSD getrandom(2) function*/
 	/* Keep reading until we get enough entropy */
 	while (read_bytes < size) {
