$FreeBSD: www/crawl/files/patch-compat::gai-errnos.h 300897 2012-07-14 14:29:18Z beat $

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
