
$FreeBSD: ports/net/ortp/files/patch-src::stun.c,v 1.2 2012/11/17 06:00:09 svnexp Exp $

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
