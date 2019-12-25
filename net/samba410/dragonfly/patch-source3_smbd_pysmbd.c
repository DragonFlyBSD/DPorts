--- source3/smbd/pysmbd.c.intermediate	2019-12-24 19:35:46.000000000 +0000
+++ source3/smbd/pysmbd.c
@@ -633,8 +633,10 @@ static PyObject *py_smbd_has_posix_acls(
 		return NULL;
 	}
 
+#ifdef MNT_ACLS
 	if (fs.f_flags & MNT_ACLS)
 		ret = true;
+#endif
 
 	TALLOC_FREE(frame);
 	return PyBool_FromLong(ret);
@@ -673,8 +675,10 @@ static PyObject *py_smbd_has_nfsv4_acls(
 		return NULL;
 	}
 
+#ifdef MNT_NFS_ACLS
 	if (fs.f_flags & MNT_NFS4ACLS)
 		ret = true;
+#endif
 
 	TALLOC_FREE(frame);
 	return PyBool_FromLong(ret);
