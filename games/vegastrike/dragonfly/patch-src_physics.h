--- src/physics.h	2015-12-04 16:07:14.000000000 +0200
+++ src/physics.h
@@ -27,7 +27,9 @@
 static const float oocc = (float) 0.0000000000000000111265005605; //1/c^2
 static const float c    = (float) 299792458.0;
 static const float co10 = (float) 29979245.8;
+#if __cplusplus < 201103L
 float copysign( float x, float y );
+#endif
 
 struct Force
 {
