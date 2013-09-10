
$FreeBSD: net/ortp/files/patch-src::stun.c 300897 2012-07-14 14:29:18Z beat $

--- src/stun.c
+++ src/stun.c
@@ -768,7 +768,7 @@
 	read(fd,&tick,sizeof(tick));
 	closesocket(fd);
       }
-#elif defined(__linux) 
+#elif defined(__linux) || defined (__FreeBSD__) 
       {
  	fd_set fdSet;
 	int maxFd=0;
