--- src/config.c.orig
+++ src/config.c
@@ -40,7 +40,7 @@
 #include <string.h>
 #if defined(__linux__)
 #include <linux/limits.h>
-#elif defined(__NetBSD__) || defined(__FreeBSD__)
+#elif defined(__NetBSD__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #include <limits.h>
 #elif defined(__APPLE__)
 #include <sys/syslimits.h>
