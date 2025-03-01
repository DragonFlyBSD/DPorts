--- src/kj/cidr.c++.orig	Fri Jan 12 16:57:48 2024
+++ src/kj/cidr.c++	Fri Feb
@@ -41,7 +41,7 @@
 #include <arpa/inet.h>
 #endif
 
-#if __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <netinet/in.h>
 #endif
 
