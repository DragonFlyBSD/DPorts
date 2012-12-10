
$FreeBSD: ports/editors/led/files/patch-src_color.c,v 1.2 2012/11/17 05:57:15 svnexp Exp $

--- src/color.c.orig	Mon Aug 23 17:16:34 2004
+++ src/color.c	Mon Aug 23 17:16:57 2004
@@ -206,6 +206,7 @@
 		}
 	}
 out:
+	;
 }
 
 /* read in color configuration file */
