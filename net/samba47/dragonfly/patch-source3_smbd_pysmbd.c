--- source3/smbd/pysmbd.c.intermediate	2018-09-10 04:40:41 UTC
+++ source3/smbd/pysmbd.c
@@ -613,8 +613,10 @@ static PyObject *py_smbd_has_posix_acls(
 		return NULL;
 	}
 
+#ifdef MNT_ACLS
 	if (fs.f_flags & MNT_ACLS)
 		ret = true;
+#endif
 
 	TALLOC_FREE(frame);
 	return PyBool_FromLong(ret);
@@ -653,8 +655,10 @@ static PyObject *py_smbd_has_nfsv4_acls(
 		return NULL;
 	}
 
+#ifdef MNT_NFS4ACLS
 	if (fs.f_flags & MNT_NFS4ACLS)
 		ret = true;
+#endif
 
 	TALLOC_FREE(frame);
 	return PyBool_FromLong(ret);
