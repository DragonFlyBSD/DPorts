--- web/httpserver.cpp.orig
+++ web/httpserver.cpp
@@ -27,7 +27,7 @@
 #include <mutex>
 
 #include <arpa/inet.h>
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <netinet/in.h>
 #endif
 #include <ifaddrs.h>
