
$FreeBSD: net/py-xmlrpc/files/patch-src_rpcDate.c 300897 2012-07-14 14:29:18Z beat $

--- src/rpcDate.c
+++ src/rpcDate.c
@@ -75,7 +75,7 @@
 	if (dp->value) {
 		Py_DECREF(dp->value);
 	}
-	PyMem_DEL(dp);
+	PyObject_DEL(dp);
 }
 
 
