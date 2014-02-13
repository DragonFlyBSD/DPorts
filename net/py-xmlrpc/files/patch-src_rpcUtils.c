
$FreeBSD: head/net/py-xmlrpc/files/patch-src_rpcUtils.c 340725 2014-01-22 17:40:44Z mat $

--- src/rpcUtils.c.orig
+++ src/rpcUtils.c
@@ -276,7 +280,7 @@
 	double		d;
 
 	d = PyFloat_AS_DOUBLE(value);
-	snprintf(buff, 255, "%f", d);
+	snprintf(buff, 255, "%.17f", d);
 	if ((buffConstant(sp, "<double>") == NULL)
 	or  (buffConcat(sp, buff) == NULL)
 	or  (buffConstant(sp, "</double>") == NULL))
