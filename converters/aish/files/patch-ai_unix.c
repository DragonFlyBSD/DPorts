$FreeBSD: ports/converters/aish/files/patch-ai_unix.c,v 1.2 2012/11/17 05:55:02 svnexp Exp $

--- ai_unix.c.orig	Fri Jun  7 12:59:05 2002
+++ ai_unix.c	Fri Jun  7 13:00:49 2002
@@ -15,7 +15,7 @@
 char	*ptr;
 {
 #ifdef BZ_BSD
-	return	bzero( ptr, len );
+	bzero( ptr, len );
 #else
 	return	memset( ptr, '\0', len );
 #endif
