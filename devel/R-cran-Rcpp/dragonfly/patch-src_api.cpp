--- src/api.cpp.orig	2016-05-14 16:04:16 UTC
+++ src/api.cpp
@@ -34,7 +34,7 @@ using namespace Rcpp;
 #endif
 
 #if defined(__GNUC__)
-    #if defined(_WIN32) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__CYGWIN__) || defined(__sun) || defined(_AIX) || defined(__MUSL__)
+    #if defined(_WIN32) || defined(__DragonFly__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__CYGWIN__) || defined(__sun) || defined(_AIX) || defined(__MUSL__)
         // do nothing
     #else
         #include <execinfo.h>
@@ -256,7 +256,7 @@ SEXP rcpp_can_use_cxx11() {
 // [[Rcpp::register]]
 SEXP stack_trace(const char* file, int line) {
     #if defined(__GNUC__)
-        #if defined(_WIN32) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__CYGWIN__) || defined(__sun) || defined(_AIX) || defined(__MUSL__)
+        #if defined(_WIN32) || defined(__DragonFly__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__CYGWIN__) || defined(__sun) || defined(_AIX) || defined(__MUSL__)
             // Simpler version for Windows and *BSD
             List trace = List::create(_["file"] = file,
                                       _[ "line"  ] = line,
