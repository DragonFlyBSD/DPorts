--- source3/smbd/pysmbd.c.intermediate	2020-11-13 15:34:10.000000000 +0000
+++ source3/smbd/pysmbd.c
@@ -790,8 +790,10 @@ static PyObject *py_smbd_has_posix_acls(
 		return NULL;
 	}
 
+#ifdef MNT_ACLS
 	if (fs.f_flags & MNT_ACLS)
 		ret = true;
+#endif
 
 	TALLOC_FREE(frame);
 	return PyBool_FromLong(ret);
@@ -830,8 +832,10 @@ static PyObject *py_smbd_has_nfsv4_acls(
 		return NULL;
 	}
 
+#ifdef MNT_NFS_ACLS
 	if (fs.f_flags & MNT_NFS4ACLS)
 		ret = true;
+#endif
 
 	TALLOC_FREE(frame);
 	return PyBool_FromLong(ret);
