
$FreeBSD: ports/net/py-xmlrpc/files/patch-src_rpcDispatch.c,v 1.2 2012/11/17 06:00:16 svnexp Exp $

--- src/rpcDispatch.c
+++ src/rpcDispatch.c
@@ -68,7 +68,7 @@
 		rpcDispClear(dp);
 		free(dp->srcs);
 	}
-	PyMem_DEL(dp);
+	PyObject_DEL(dp);
 }
 
 
