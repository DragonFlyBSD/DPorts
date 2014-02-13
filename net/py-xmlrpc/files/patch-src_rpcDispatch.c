
$FreeBSD: head/net/py-xmlrpc/files/patch-src_rpcDispatch.c 340725 2014-01-22 17:40:44Z mat $

--- src/rpcDispatch.c
+++ src/rpcDispatch.c
@@ -68,7 +68,7 @@
 		rpcDispClear(dp);
 		free(dp->srcs);
 	}
-	PyMem_DEL(dp);
+	PyObject_DEL(dp);
 }
 
 
