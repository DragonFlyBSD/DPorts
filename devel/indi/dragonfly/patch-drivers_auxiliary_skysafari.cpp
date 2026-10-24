--- drivers/auxiliary/skysafari.cpp.orig
+++ drivers/auxiliary/skysafari.cpp
@@ -39,7 +39,7 @@
 #include <arpa/inet.h>
 #include <sys/socket.h>
 
-#if defined(__FreeBSD__) || defined(__OpenBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__) || defined(__OpenBSD__)
 #include <netinet/in.h>
 #endif
 
