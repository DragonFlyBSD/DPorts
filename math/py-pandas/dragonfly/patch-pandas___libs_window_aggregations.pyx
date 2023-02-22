--- pandas/_libs/window/aggregations.pyx.orig	2022-08-23 17:15:49 UTC
+++ pandas/_libs/window/aggregations.pyx
@@ -17,11 +17,18 @@ from numpy cimport (
     float32_t,
     float64_t,
     int64_t,
-    ndarray,
+    ndarray
 )
 
 cnp.import_array()
 
+cdef extern from "../src/headers/cmath" namespace "std":
+    bint isnan(float64_t) nogil
+    bint notnan(float64_t) nogil
+    int signbit(float64_t) nogil
+    float64_t sqrt(float64_t x) nogil
+
+
 from pandas._libs.algos import is_monotonic
 
 from pandas._libs.dtypes cimport numeric_t
