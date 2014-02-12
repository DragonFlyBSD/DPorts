
$FreeBSD: head/editors/led/files/patch-src::file.c 340725 2014-01-22 17:40:44Z mat $

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
