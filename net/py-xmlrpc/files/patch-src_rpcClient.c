
$FreeBSD: head/net/py-xmlrpc/files/patch-src_rpcClient.c 340725 2014-01-22 17:40:44Z mat $

--- src/rpcClient.c
+++ src/rpcClient.c
@@ -179,7 +179,7 @@
 	cp->url = NULL;
 	Py_DECREF(cp->src);
 	Py_DECREF(cp->disp);
-	PyMem_DEL(cp);
+	PyObject_DEL(cp);
 }
 
 
