
$FreeBSD: ports/net/py-xmlrpc/files/patch-src_rpcClient.c,v 1.2 2012/11/17 06:00:16 svnexp Exp $

--- src/rpcClient.c
+++ src/rpcClient.c
@@ -179,7 +179,7 @@
 	cp->url = NULL;
 	Py_DECREF(cp->src);
 	Py_DECREF(cp->disp);
-	PyMem_DEL(cp);
+	PyObject_DEL(cp);
 }
 
 
