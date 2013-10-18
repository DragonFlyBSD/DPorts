--- ../../src/racket/src/bool.c.orig	2013-08-09 22:38:27.000000000 +0000
+++ ../../src/racket/src/bool.c
@@ -235,6 +235,7 @@ XFORM_NONGCING static MZ_INLINE int mz_l
 }
 #endif
 XFORM_NONGCING static MZ_INLINE int double_eqv(double a, double b)
+XFORM_SKIP_PROC
 {
 # ifndef NAN_EQUALS_ANYTHING
   if (a != b) {
