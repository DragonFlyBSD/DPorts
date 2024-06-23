--- libknet/libknet.h.orig	2023-07-10 17:06:59 UTC
+++ libknet/libknet.h
@@ -15,6 +15,9 @@
 #include <netinet/in.h>
 #include <unistd.h>
 #include <limits.h>
+#ifdef __DragonFly__
+#include <sys/socket.h>
+#endif
 
 /**
  * @file libknet.h
