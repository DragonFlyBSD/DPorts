-- Make the Cython source compatible with Cython 3 by declaring the C++
-- template functions directly in the .pyx file. The previous cimport from
-- cpp.pxd fails under Cython 3 with "cimported module has no attribute".
-- This is needed to regenerate the extension for Python 3.12.

--- fsph/_fsph.pyx.orig	2023-05-04 11:30:36 UTC
+++ fsph/_fsph.pyx
@@ -8,7 +8,9 @@ from libcpp cimport bool, complex
 from cpython cimport PyObject, Py_INCREF
 from libcpp cimport bool, complex
 
-cimport cpp
+cdef extern from "../src/spherical_harmonics.hpp" namespace "fsph":
+    void evaluate_SPH[T](void*, unsigned int, T*, T*, unsigned int, bool) nogil
+    void evaluate_SPH_with_grads[T](void*, void*, unsigned int, T*, T*, unsigned int, bool) nogil
 
 np.import_array()
 
@@ -59,13 +61,13 @@ def pointwise_sph(phi, theta, lmax, negative_m=True):
         phi_f = phi.ravel()
         theta_f = theta.ravel()
         result_f = result.ravel()
-        cpp.evaluate_SPH[float](&result_f[0], lmax, &phi_f[0], &theta_f[0], phi.size, negative_m)
+        evaluate_SPH[float](&result_f[0], lmax, &phi_f[0], &theta_f[0], phi.size, negative_m)
     else:
         result = np.empty(resultShape, dtype=np.complex128)
         phi_d = phi.ravel()
         theta_d = theta.ravel()
         result_d = result.ravel()
-        cpp.evaluate_SPH[double](&result_d[0], lmax, &phi_d[0], &theta_d[0], phi.size, negative_m)
+        evaluate_SPH[double](&result_d[0], lmax, &phi_d[0], &theta_d[0], phi.size, negative_m)
 
     return result
 
@@ -129,7 +131,7 @@ def pointwise_sph_grads(phi, theta, lmax, negative_m=T
         phi_f = phi.ravel()
         theta_f = theta.ravel()
         result_f = result.ravel()
-        cpp.evaluate_SPH_with_grads[float](&result_f[0], sph_target_f, lmax, &phi_f[0], &theta_f[0], phi.size, negative_m)
+        evaluate_SPH_with_grads[float](&result_f[0], sph_target_f, lmax, &phi_f[0], &theta_f[0], phi.size, negative_m)
     else:
         result = np.empty(resultShape, dtype=np.complex128)
         if return_sphs:
@@ -139,7 +141,7 @@ def pointwise_sph_grads(phi, theta, lmax, negative_m=T
         phi_d = phi.ravel()
         theta_d = theta.ravel()
         result_d = result.ravel()
-        cpp.evaluate_SPH_with_grads[double](&result_d[0], sph_target_d, lmax, &phi_d[0], &theta_d[0], phi.size, negative_m)
+        evaluate_SPH_with_grads[double](&result_d[0], sph_target_d, lmax, &phi_d[0], &theta_d[0], phi.size, negative_m)
 
     if return_sphs:
         return result, sphs
