--- src/cbang/net/IPAddress.cpp.orig
+++ src/cbang/net/IPAddress.cpp
@@ -50,7 +50,7 @@
 #else
 #include <sys/types.h>
 #include <sys/socket.h>
-#  ifdef __FreeBSD__
+#  if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <netinet/in.h>
 #  endif
 #include <netdb.h>
