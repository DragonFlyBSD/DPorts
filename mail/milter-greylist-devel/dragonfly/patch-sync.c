--- sync.c.orig	2015-06-18 06:42:48.000000000 +0300
+++ sync.c
@@ -1540,7 +1540,7 @@ local_addr(sa, salen)
 	errno = 0;	 /* Solaris' bind() does not set errno... */
 	if (bind(sfd, sa, salen) == -1) {
 		if (errno != EADDRNOTAVAIL && 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 		    errno != EINVAL &&
 #endif
 #ifdef __sun
