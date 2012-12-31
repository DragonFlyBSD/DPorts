$FreeBSD: ports/www/crawl/files/patch-compat::gai-errnos.h,v 1.2 2012/11/17 06:02:30 svnexp Exp $

--- compat/gai-errnos.h.orig	Fri Mar 12 07:29:36 2004
+++ compat/gai-errnos.h	Fri Mar 12 07:29:52 2004
@@ -10,5 +10,7 @@
 /* for old netdb.h */
 #ifndef EAI_NODATA
 #define EAI_NODATA	1
+#endif
+#ifndef EAI_MEMORY
 #define EAI_MEMORY	2
 #endif
