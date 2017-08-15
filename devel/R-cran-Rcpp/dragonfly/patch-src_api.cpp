--- src/api.cpp.orig	2017-07-13 11:40:06 UTC
+++ src/api.cpp
@@ -33,7 +33,7 @@ using namespace Rcpp;
 #endif
 
 #if defined(__GNUC__) || defined(__clang__)
-    #if defined(_WIN32) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__CYGWIN__) || defined(__sun) || defined(_AIX) || defined(__MUSL__) || defined(__HAIKU__)
+    #if defined(_WIN32) || defined(__DragonFly__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__CYGWIN__) || defined(__sun) || defined(_AIX) || defined(__MUSL__) || defined(__HAIKU__)
         // do nothing
     #else
         #include <execinfo.h>
@@ -272,7 +272,7 @@ SEXP rcpp_can_use_cxx11() {				// #nocov
 // [[Rcpp::register]]
 SEXP stack_trace(const char* file, int line) {
     #if defined(__GNUC__) || defined(__clang__)
-        #if defined(_WIN32) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__CYGWIN__) || defined(__sun) || defined(_AIX) || defined(__MUSL__) || defined(__HAIKU__)
+        #if defined(_WIN32) || defined(__DragonFly__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__CYGWIN__) || defined(__sun) || defined(_AIX) || defined(__MUSL__) || defined(__HAIKU__)
             // Simpler version for Windows and *BSD
             List trace = List::create(_["file"] = file,
                                       _[ "line"  ] = line,
