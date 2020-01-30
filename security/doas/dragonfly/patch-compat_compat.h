--- compat/compat.h.orig	2019-12-28 02:16:17 UTC
+++ compat/compat.h
@@ -1,7 +1,7 @@
 #include <sys/types.h>
 #include <stdarg.h>
 
-#if !defined(__NetBSD__)
+#if !defined(__NetBSD__) && !defined(__DragonFly__)
 void closefrom(int lowfd);
 #endif
 
