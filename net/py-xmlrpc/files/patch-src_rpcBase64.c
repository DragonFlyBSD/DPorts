
$FreeBSD: ports/net/py-xmlrpc/files/patch-src_rpcBase64.c,v 1.2 2012/11/17 06:00:16 svnexp Exp $

--- src/rpcBase64.c
+++ src/rpcBase64.c
@@ -239,7 +239,7 @@
 	if (bp->value) {
 		Py_DECREF(bp->value);
 	}
-	PyMem_DEL(bp);
+	PyObject_DEL(bp);
 }
 
 
