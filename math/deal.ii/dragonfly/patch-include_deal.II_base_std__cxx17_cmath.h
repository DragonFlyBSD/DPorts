Boost is compiled w/o long double.

--- include/deal.II/base/std_cxx17/cmath.h.orig	2020-10-01 17:19:45 UTC
+++ include/deal.II/base/std_cxx17/cmath.h
@@ -32,8 +32,10 @@ namespace std_cxx17
                          double) = boost::math::cyl_bessel_j<double, double>;
   float (&cyl_bessel_jf)(float,
                          float)  = boost::math::cyl_bessel_j<float, float>;
+#ifndef __DragonFly__
   long double (&cyl_bessel_jl)(long double, long double) =
     boost::math::cyl_bessel_j<long double, long double>;
+#endif
 #else
   using std::cyl_bessel_j;
   using std::cyl_bessel_jf;
