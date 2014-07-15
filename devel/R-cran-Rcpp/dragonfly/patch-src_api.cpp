--- src/api.cpp.orig	2014-06-06 23:38:58.000000000 +0000
+++ src/api.cpp
@@ -34,7 +34,9 @@ using namespace Rcpp ;
 #endif
 
 #if defined(__GNUC__)
-    #if defined(WIN32) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__CYGWIN__) || defined(__sun)
+    #if defined(WIN32) || defined(__FreeBSD__) || defined(__NetBSD__) \
+     || defined(__OpenBSD__) || defined(__CYGWIN__) || defined(__sun) \
+     || defined(__DragonFly__)
     #else
         #include <execinfo.h>
 
@@ -239,7 +241,9 @@ SEXP rcpp_can_use_cxx0x(){
 // [[Rcpp::register]]
 SEXP stack_trace( const char* file, int line ){
     #if defined(__GNUC__)
-        #if defined(WIN32) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__CYGWIN__) || defined(__sun)
+        #if defined(WIN32) || defined(__FreeBSD__) || defined(__NetBSD__) \
+         || defined(__OpenBSD__) || defined(__CYGWIN__) || defined(__sun) \
+         || defined(__DragonFly__)
             // Simpler version for Windows and *BSD
             List trace = List::create(
                 _[ "file"  ] = file,
