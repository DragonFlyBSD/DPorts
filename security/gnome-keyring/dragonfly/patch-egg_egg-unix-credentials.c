--- egg/egg-unix-credentials.c.intermediate	2012-12-31 15:17:12.446831000 +0100
+++ egg/egg-unix-credentials.c	2012-12-31 15:17:31.706858000 +0100
@@ -38,7 +38,7 @@
 #include <ucred.h>
 #endif
 
-#if __FreeBSD_version < 701101
+#if defined(__FreeBSD__) && __FreeBSD_version < 701101
 static char *
 strndup (const char *s, size_t n)
 {
