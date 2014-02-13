
$FreeBSD: head/net/py-xmlrpc/files/patch-src_rpcBase64.c 340725 2014-01-22 17:40:44Z mat $

--- src/rpcBase64.c
+++ src/rpcBase64.c
@@ -239,7 +239,7 @@
 	if (bp->value) {
 		Py_DECREF(bp->value);
 	}
-	PyMem_DEL(bp);
+	PyObject_DEL(bp);
 }
 
 
