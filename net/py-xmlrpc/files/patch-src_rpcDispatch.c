
$FreeBSD: net/py-xmlrpc/files/patch-src_rpcDispatch.c 300897 2012-07-14 14:29:18Z beat $

--- src/rpcDispatch.c
+++ src/rpcDispatch.c
@@ -68,7 +68,7 @@
 		rpcDispClear(dp);
 		free(dp->srcs);
 	}
-	PyMem_DEL(dp);
+	PyObject_DEL(dp);
 }
 
 
