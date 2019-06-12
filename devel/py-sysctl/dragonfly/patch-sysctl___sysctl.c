--- sysctl/_sysctl.c.orig	2017-07-26 18:17:38 UTC
+++ sysctl/_sysctl.c
@@ -469,7 +469,12 @@ static PyObject *new_sysctlobj(int *oid,
 		Py_DECREF(oidentry);
 	}
 	writable = PyBool_FromLong(kind & CTLFLAG_WR);
+#ifdef __DragonFly__
+	/* DragonFly has separation between loader tunables and sysctls. */
+	tuneable = 0;
+#else
 	tuneable = PyBool_FromLong(kind & CTLFLAG_TUN);
+#endif
 	args = Py_BuildValue("()");
 	kwargs = Py_BuildValue("{s:s,s:O,s:O,s:O,s:I,s:O}",
 		"name", name,
