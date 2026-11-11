--- src/auth/pool_hba.c.orig
+++ src/auth/pool_hba.c
@@ -30,7 +30,7 @@
 #include <errno.h>
 #include <netdb.h>
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <netinet/in.h>
 #endif
 
