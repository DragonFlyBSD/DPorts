--- blitz/mathfunc.h.orig	2005-05-18 23:22:38.000000000 +0300
+++ blitz/mathfunc.h
@@ -3,11 +3,12 @@
 #ifndef BZ_MATHFUNC_H
 #define BZ_MATHFUNC_H
 
+#include <cstdlib>
+
 #ifndef BZ_APPLICS_H
  #error <blitz/mathfunc.h> should be included via <blitz/applics.h>
 #endif
 
-
 #ifndef BZ_PRETTYPRINT_H
  #include <blitz/prettyprint.h>
 #endif
