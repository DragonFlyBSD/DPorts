--- sslscan.c.intermediate	2020-11-24 04:45:53.000000000 +0000
+++ sslscan.c
@@ -110,7 +110,7 @@
   #include <unistd.h>
 #endif
 
-#if defined(__FreeBSD__) || defined(__OpenBSD__)
+#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 #include <netinet/in.h>
 #include <arpa/inet.h>
 #endif
