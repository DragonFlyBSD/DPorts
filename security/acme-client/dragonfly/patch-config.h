--- config.h.orig	2016-11-20 10:31:06 UTC
+++ config.h
@@ -48,9 +48,9 @@ int	setresuid(gid_t, gid_t, gid_t);
 #endif
 
 /*
- * FreeBSD goop.
+ * FreeBSD/DragonFly goop.
  */
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/socket.h>
 #include <sys/types.h>
 #include <arpa/inet.h>
