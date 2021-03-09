--- src/ConnectionRemote/ConnectionRemote.cpp.intermediate	2021-03-09 13:21:41.000000000 +0000
+++ src/ConnectionRemote/ConnectionRemote.cpp
@@ -31,7 +31,7 @@
 #include <Winsock.h>
 #endif // LINUX
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/socket.h>
 #endif
 
