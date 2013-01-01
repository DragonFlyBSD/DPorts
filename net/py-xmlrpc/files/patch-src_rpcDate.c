
$FreeBSD: ports/net/py-xmlrpc/files/patch-src_rpcDate.c,v 1.2 2012/11/17 06:00:16 svnexp Exp $

--- src/rpcDate.c
+++ src/rpcDate.c
@@ -75,7 +75,7 @@
 	if (dp->value) {
 		Py_DECREF(dp->value);
 	}
-	PyMem_DEL(dp);
+	PyObject_DEL(dp);
 }
 
 
