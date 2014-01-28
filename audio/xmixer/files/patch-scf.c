
$FreeBSD: audio/xmixer/files/patch-scf.c 340725 2014-01-22 17:40:44Z mat $

--- scf.c.orig	Mon Sep  6 11:02:44 2004
+++ scf.c	Mon Sep  6 11:03:05 2004
@@ -1009,7 +1009,7 @@
 			if (*(p+1) == '\0')
 				break;
 		}
-		STOP:
+		STOP:;
 	} else {
 		/* it's a int
 		 */
