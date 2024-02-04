--- scipy/spatial/_ckdtree.pyx.orig	1970-01-01 00:00:00 UTC
+++ scipy/spatial/_ckdtree.pyx
@@ -16,10 +16,11 @@ cimport numpy as np
 from cpython.mem cimport PyMem_Malloc, PyMem_Free
 from libcpp.vector cimport vector
 from libcpp cimport bool
-from libc.math cimport isinf, INFINITY
+from libc.math cimport INFINITY
 
 cimport cython
 import os
+import cmath
 import threading
 import operator
 
@@ -1380,9 +1381,9 @@ cdef class cKDTree:
         n_queries = real_r.shape[0]
 
         # Internally, we represent all distances as distance ** p
-        if not isinf(p):
+        if not cmath.isinf(p):
             for i in range(n_queries):
-                if not isinf(real_r[i]):
+                if not cmath.isinf(real_r[i]):
                     real_r[i] = real_r[i] ** p
 
         if weights is None:
