
$FreeBSD: net/py-xmlrpc/files/patch-src_rpcSource.c 300897 2012-07-14 14:29:18Z beat $

--- src/rpcSource.c
+++ src/rpcSource.c
@@ -61,7 +61,7 @@
 	if (srcp->onErr and srcp->onErrType == ONERR_TYPE_PY) {
 		Py_DECREF((PyObject *)srcp->onErr);
 	}
-	PyMem_DEL(srcp);
+	PyObject_DEL(srcp);
 }
 
 
