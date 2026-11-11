--- src/syswatch.c.orig
+++ src/syswatch.c
@@ -1865,7 +1865,7 @@
 	thislimit.rlim_cur = 1024;
 	thislimit.rlim_max = 1024;
 
-#if (defined(__FreeBSD) || defined(FreeBSD) || defined(__FreeBSD__) || \
+#if (defined(__FreeBSD) || defined(FreeBSD) || defined(__FreeBSD__) || defined(__DragonFly__) || \
 	defined(sun))
 	setrlimit(RLIMIT_NOFILE, &thislimit);
 	getrlimit(RLIMIT_NOFILE, &thislimit);
