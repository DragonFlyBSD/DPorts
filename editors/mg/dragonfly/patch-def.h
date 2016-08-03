--- def.h.intermediate	2016-08-01 16:15:08 UTC
+++ def.h
@@ -15,7 +15,7 @@
 
 #include	"chrdef.h"
 
-#if defined(__APPLE__) || defined(__FreeBSD__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #  define LOGIN_NAME_MAX _POSIX_LOGIN_NAME_MAX
 #endif
 
