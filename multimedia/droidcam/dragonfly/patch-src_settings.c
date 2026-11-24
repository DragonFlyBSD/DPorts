--- src/settings.c.orig
+++ src/settings.c
@@ -14,7 +14,7 @@
 #include <linux/limits.h>
 #endif
 
-#if __FreeBSD__
+#if __FreeBSD__ || __DragonFly__
 #include <sys/limits.h>
 #include <sys/param.h>
 #endif
