
$FreeBSD: net/py-xmlrpc/files/patch-src_rpcBase64.c 300897 2012-07-14 14:29:18Z beat $

--- src/rpcBase64.c
+++ src/rpcBase64.c
@@ -239,7 +239,7 @@
 	if (bp->value) {
 		Py_DECREF(bp->value);
 	}
-	PyMem_DEL(bp);
+	PyObject_DEL(bp);
 }
 
 
