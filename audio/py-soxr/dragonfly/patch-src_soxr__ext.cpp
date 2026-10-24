--- src/soxr_ext.cpp.orig	2026-07-04 12:00:00 UTC
+++ src/soxr_ext.cpp
@@ -127,7 +127,7 @@ class CSoxr { (public)
     }
 
     template <typename T>
-    auto process(
+    nb::detail::ndarray_object<nb::numpy, T> process(
             ndarray<const T, nb::ndim<2>, nb::c_contig, nb::device::cpu> x,
             bool last=false) {
         const unsigned channels = x.shape(1);
@@ -208,7 +208,7 @@ template <typename T>
 // soxr_oneshot() becomes much slower when input is long.
 // To avoid this, divide long input and process.
 template <typename T>
-auto csoxr_divide_proc(
+ndarray<nb::numpy, T> csoxr_divide_proc(
         double in_rate, double out_rate,
         ndarray<const T, nb::ndim<2>, nb::c_contig, nb::device::cpu> x,
         unsigned long quality) {
@@ -275,7 +275,7 @@ template <typename T>
 
 // split channel memory I/O (e.g. Fortran order)
 template <typename T>
-auto csoxr_split_ch(
+ndarray<nb::numpy, T> csoxr_split_ch(
         double in_rate, double out_rate,
         ndarray<const T, nb::ndim<2>, nb::device::cpu> x,
         unsigned long quality) {
@@ -360,7 +360,7 @@ template <typename T>
 
 
 template <typename T>
-auto csoxr_oneshot(
+ndarray<nb::numpy, T> csoxr_oneshot(
         double in_rate, double out_rate,
         ndarray<const T, nb::ndim<2>, nb::c_contig, nb::device::cpu> x,
         unsigned long quality) {
