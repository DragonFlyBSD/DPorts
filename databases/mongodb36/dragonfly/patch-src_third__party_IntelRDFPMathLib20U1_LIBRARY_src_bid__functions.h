--- src/third_party/IntelRDFPMathLib20U1/LIBRARY/src/bid_functions.h.orig	2019-01-31 21:33:42 UTC
+++ src/third_party/IntelRDFPMathLib20U1/LIBRARY/src/bid_functions.h
@@ -159,7 +159,7 @@ typedef unsigned    long fexcept_t;
 typedef unsigned bid__int64 fexcept_t;
 #endif
 #else
-#if defined(__QNX__) || defined(__OpenBSD__)
+#if defined(__QNX__) || defined(__OpenBSD__) || defined(__DragonFly__)
 #include <fenv.h>
 #else
 typedef unsigned short int fexcept_t;
