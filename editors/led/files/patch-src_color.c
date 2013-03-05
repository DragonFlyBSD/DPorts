
$FreeBSD: editors/led/files/patch-src_color.c 300896 2012-07-14 13:54:48Z beat $

--- src/color.c.orig	Mon Aug 23 17:16:34 2004
+++ src/color.c	Mon Aug 23 17:16:57 2004
@@ -206,6 +206,7 @@
 		}
 	}
 out:
+	;
 }
 
 /* read in color configuration file */
