--- libs/indibase/connectionplugins/connectiontcp.cpp.orig
+++ libs/indibase/connectionplugins/connectiontcp.cpp
@@ -28,7 +28,7 @@
 #include <unistd.h>
 #include <regex>
 
-#if defined(__FreeBSD__) || defined(__OpenBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__) || defined(__OpenBSD__)
 #include <arpa/inet.h>
 #include <netinet/in.h>
 #include <sys/socket.h>
