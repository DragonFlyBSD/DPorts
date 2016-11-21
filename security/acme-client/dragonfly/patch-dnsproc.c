--- dnsproc.c.orig	2016-11-20 10:29:50 UTC
+++ dnsproc.c
@@ -69,8 +69,8 @@ host_dns(const char *s, struct addr *vec
 	error = getaddrinfo(s, NULL, &hints, &res0);
 
 	if (error == EAI_AGAIN ||
-		/* FIXME */
-#ifndef __FreeBSD__
+		/* FIXME */		
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 	    error == EAI_NODATA ||
 #endif
 	    error == EAI_NONAME)
