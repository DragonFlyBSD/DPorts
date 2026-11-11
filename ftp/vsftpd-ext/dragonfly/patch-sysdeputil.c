DragonFly keeps wtmpx with updwtmpx(), as NetBSD does.

--- sysdeputil.c.orig
+++ sysdeputil.c
@@ -120,6 +120,10 @@
   #endif
 #endif
 
+#if defined(__DragonFly__)
+  #define WTMPX_FILE _PATH_WTMPX
+#endif
+
 #ifdef __hpux
   #include <sys/socket.h>
   #ifdef SF_DISCONNECT
