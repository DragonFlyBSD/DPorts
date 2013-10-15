$FreeBSD: www/crawl/files/patch-dns.c 300897 2012-07-14 14:29:18Z beat $

--- dns.c.orig	Sun May 18 10:21:33 2003
+++ dns.c	Mon May 30 16:20:14 2005
@@ -562,8 +562,13 @@
         if (res != 0) {
                 fprintf(stderr, "%s: getaddrinfo(%s): %s\n", __func__,
 		    ip, gai_strerror(res));
+#ifdef EAI_NODATA
 		if (res != EAI_NODATA)
 			return (-1);
+#else
+		if (res != EAI_NONAME)
+			return (-1);
+#endif
 
 		/* Negative caching */
 		ai = NULL;
