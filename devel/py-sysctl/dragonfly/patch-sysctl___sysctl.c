--- sysctl/_sysctl.c.orig	2020-10-27 16:49:58 UTC
+++ sysctl/_sysctl.c
@@ -587,7 +587,12 @@ new_sysctlobj(const int *oid, u_int nlen
 		return (PyErr_SetFromErrno(PyExc_OSError));
 
 	writable = PyBool_FromLong(kind & CTLFLAG_WR);
+#ifdef __DragonFly__
+	/* DragonFly has separation between loader tunables and sysctls. */
+	tuneable = 0;
+#else
 	tuneable = PyBool_FromLong(kind & CTLFLAG_TUN);
+#endif
 
 	oidobj = PyList_New(0);
 	for (u_int i = 0; i < nlen; i++) {
