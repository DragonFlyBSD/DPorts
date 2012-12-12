
$FreeBSD: ports/sysutils/installwatch/files/patch-installwatch.c,v 1.2 2012/11/17 06:01:34 svnexp Exp $

--- installwatch.c.orig
+++ installwatch.c
@@ -574,7 +574,7 @@
 
 	REFCOUNT;
 	va_start(ap, flags);
-	mode = va_arg(ap, mode_t);
+	mode = va_arg(ap, int);
 	va_end(ap);
 	canonicalize(pathname, canonic);
 
