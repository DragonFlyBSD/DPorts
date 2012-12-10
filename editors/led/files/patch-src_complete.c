
$FreeBSD: ports/editors/led/files/patch-src_complete.c,v 1.2 2012/11/17 05:57:15 svnexp Exp $

--- src/complete.c.orig	Mon Aug 23 17:17:13 2004
+++ src/complete.c	Mon Aug 23 17:17:24 2004
@@ -183,6 +183,7 @@
 				sizeof(u_char *));
 		}
 next:
+	;
 	}
 	comps[i] = NULL;
 
