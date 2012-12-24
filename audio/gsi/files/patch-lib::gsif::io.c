$FreeBSD: ports/audio/gsi/files/patch-lib::gsif::io.c,v 1.2 2012/11/17 05:54:33 svnexp Exp $

--- lib/gsif/io.c.orig	Sat Jan 10 22:22:35 2004
+++ lib/gsif/io.c	Sat Jan 10 22:21:32 2004
@@ -80,7 +80,7 @@
 	fint = gsif_swap_int16(i);
 	status = write (fd, &fint, 2);
 #else
-	fint = val;
+	fint = i;
 	status = write (fd, &fint, 2);
 #endif
 	if (status != 2) (*s) = status;
