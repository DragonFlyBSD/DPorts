Something is borked here, for now just match proto in security/xmlsec funcs

--- x509.c.orig	2005-12-13 17:53:29.000000000 +0200
+++ x509.c
@@ -43,7 +43,12 @@ PyObject *xmlsec_X509DataGetNodeContent(
 
   node = xmlNodePtr_get(node_obj);
   keyInfoCtx = xmlSecKeyInfoCtxPtr_get(keyInfoCtx_obj);
+#ifdef __DragonFly__
+  /* XXX something fishy */
+  ret = xmlSecX509DataGetNodeContent(node, keyInfoCtx);
+#else
   ret = xmlSecX509DataGetNodeContent(node, deleteChildren, keyInfoCtx);
+#endif
 
   return wrap_int(ret);
 }
