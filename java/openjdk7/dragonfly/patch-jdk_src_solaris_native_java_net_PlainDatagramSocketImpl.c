--- jdk/src/solaris/native/java/net/PlainDatagramSocketImpl.c.intermediate	2013-05-13 10:51:23.578118000 +0000
+++ jdk/src/solaris/native/java/net/PlainDatagramSocketImpl.c
@@ -357,7 +357,7 @@ Java_java_net_PlainDatagramSocketImpl_di
 #ifdef AF_INET6
         if (ipv6_available()) {
             struct sockaddr_in6 *him6 = (struct sockaddr_in6 *)&addr;
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
             him6->sin6_family = AF_INET6;
 #else
             him6->sin6_family = AF_UNSPEC;
@@ -367,7 +367,7 @@ Java_java_net_PlainDatagramSocketImpl_di
 #endif
         {
             struct sockaddr_in *him4 = (struct sockaddr_in*)&addr;
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
             him4->sin_family = AF_INET;
 #else
             him4->sin_family = AF_UNSPEC;
