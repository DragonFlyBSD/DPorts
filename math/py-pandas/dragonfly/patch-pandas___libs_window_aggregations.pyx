--- pandas/_libs/window/aggregations.pyx.orig	2023-07-31 20:24:46.329909000 +0200
+++ pandas/_libs/window/aggregations.pyx	2023-07-31 23:24:43.998652000 +0200
@@ -23,6 +23,13 @@ cnp.import_array()
 
 import cython
 
+cdef extern from "../src/headers/cmath" namespace "std":
+
+    bint isnan(float64_t) nogil
+    bint notnan(float64_t) nogil
+    int signbit(float64_t) nogil
+    float64_t sqrt(float64_t x) nogil
+
 from pandas._libs.algos import is_monotonic
 
 
