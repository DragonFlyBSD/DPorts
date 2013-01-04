--- jdk/src/solaris/native/java/net/PlainDatagramSocketImpl.c.orig	2012-08-10 19:31:31.000000000 +0200
+++ jdk/src/solaris/native/java/net/PlainDatagramSocketImpl.c	2012-12-28 13:40:42.364507000 +0100
@@ -23,12 +23,12 @@
  * questions.
  */
 
+#include <sys/types.h>
+#include <sys/socket.h>
 #include <errno.h>
 #include <netinet/in.h>
 #include <stdlib.h>
 #include <string.h>
-#include <sys/types.h>
-#include <sys/socket.h>
 
 #ifdef __solaris__
 #include <fcntl.h>
@@ -357,13 +357,21 @@
 #ifdef AF_INET6
         if (ipv6_available()) {
             struct sockaddr_in6 *him6 = (struct sockaddr_in6 *)&addr;
+#if defined(__FreeBSD__) || defined(__DragonFly__)
+            him6->sin6_family = AF_INET6;
+#else
             him6->sin6_family = AF_UNSPEC;
+#endif
             len = sizeof(struct sockaddr_in6);
         } else
 #endif
         {
             struct sockaddr_in *him4 = (struct sockaddr_in*)&addr;
+#if defined(__FreeBSD__) || defined(__DragonFly__)
+            him4->sin_family = AF_INET;
+#else
             him4->sin_family = AF_UNSPEC;
+#endif
             len = sizeof(struct sockaddr_in);
         }
         JVM_Connect(fd, (struct sockaddr *)&addr, len);
