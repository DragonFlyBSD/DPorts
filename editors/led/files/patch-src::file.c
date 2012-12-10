
$FreeBSD: ports/editors/led/files/patch-src::file.c,v 1.4 2012/11/17 05:57:15 svnexp Exp $

--- src/file.c	2002/07/15 11:40:21	1.1
+++ src/file.c	2002/07/15 11:42:31
@@ -192,6 +192,8 @@
 			putc('\r', fp);
 		putc('\n', fp);
 	}
+	fflush(fp);
+	fsync(fileno(fp));
 
 	return 0;
 }
