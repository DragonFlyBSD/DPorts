No LEVEL2 on DragonFly

--- acl.ci.orig	2012-05-13 04:13:47 UTC
+++ acl.c
@@ -83,9 +83,11 @@ static PyObject* Permset_new(PyTypeObjec
                              PyObject *keywds);
 #endif
 
+#ifndef __DragonFly__
 static acl_perm_t holder_ACL_EXECUTE = ACL_EXECUTE;
 static acl_perm_t holder_ACL_READ = ACL_READ;
 static acl_perm_t holder_ACL_WRITE = ACL_WRITE;
+#endif
 
 typedef struct {
     PyObject_HEAD
