
$FreeBSD: head/net/py-xmlrpc/files/patch-src_rpcDate.c 340725 2014-01-22 17:40:44Z mat $

--- src/rpcDate.c
+++ src/rpcDate.c
@@ -75,7 +75,7 @@
 	if (dp->value) {
 		Py_DECREF(dp->value);
 	}
-	PyMem_DEL(dp);
+	PyObject_DEL(dp);
 }
 
 
