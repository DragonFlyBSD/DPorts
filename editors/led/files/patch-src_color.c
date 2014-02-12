
$FreeBSD: head/editors/led/files/patch-src_color.c 340725 2014-01-22 17:40:44Z mat $

--- src/color.c.orig	Mon Aug 23 17:16:34 2004
+++ src/color.c	Mon Aug 23 17:16:57 2004
@@ -206,6 +206,7 @@
 		}
 	}
 out:
+	;
 }
 
 /* read in color configuration file */
