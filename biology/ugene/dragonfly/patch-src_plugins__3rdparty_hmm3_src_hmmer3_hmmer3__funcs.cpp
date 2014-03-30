--- src/plugins_3rdparty/hmm3/src/hmmer3/hmmer3_funcs.cpp.orig	2014-03-30 10:21:38.280423000 +0000
+++ src/plugins_3rdparty/hmm3/src/hmmer3/hmmer3_funcs.cpp
@@ -31,7 +31,7 @@ float infinity() {
 }
 
 bool isfin( float x ) {
-    return !isnan( x ) && !isinf( x );
+    return !std::isnan( x ) && !std::isinf( x );
 }
 
 const char TERM_SYM = '\0';
