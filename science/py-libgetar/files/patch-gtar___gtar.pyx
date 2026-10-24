-- Fix relative import of local cpp.pxd in Cython 3 to avoid shadowing issues
--- gtar/_gtar.pyx.orig	2026-07-07 02:28:54 UTC
+++ gtar/_gtar.pyx
@@ -8,8 +8,8 @@ from cpython cimport PyObject, Py_INCREF
 cimport numpy as np
 from cpython cimport PyObject, Py_INCREF
 
-cimport cpp
-from cpp cimport GTAR as GTAR_
+from . cimport cpp
+from .cpp cimport GTAR as GTAR_
 
 np.import_array()
 
