
$FreeBSD: sysutils/installwatch/files/patch-installwatch.c 300897 2012-07-14 14:29:18Z beat $

--- installwatch.c.orig
+++ installwatch.c
@@ -574,7 +574,7 @@
 
 	REFCOUNT;
 	va_start(ap, flags);
-	mode = va_arg(ap, mode_t);
+	mode = va_arg(ap, int);
 	va_end(ap);
 	canonicalize(pathname, canonic);
 
