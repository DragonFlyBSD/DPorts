--- src/api.cpp.orig	2018-03-08 17:04:51 UTC
+++ src/api.cpp
@@ -33,7 +33,7 @@ using namespace Rcpp;
 #endif
 
 #if defined(__GNUC__) || defined(__clang__)
-    #if defined(_WIN32) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__CYGWIN__) || defined(__sun) || defined(_AIX) || defined(__MUSL__) || defined(__HAIKU__) || defined(__ANDROID__)
+    #if defined(_WIN32) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__CYGWIN__) || defined(__sun) || defined(_AIX) || defined(__MUSL__) || defined(__HAIKU__) || defined(__ANDROID__) || defined(__DragonFly__)
         // do nothing
     #else
         #include <execinfo.h>
@@ -267,7 +267,7 @@ SEXP rcpp_can_use_cxx11() {				// #nocov
 // [[Rcpp::register]]
 SEXP stack_trace(const char* file, int line) {
     #if defined(__GNUC__) || defined(__clang__)
-        #if defined(_WIN32) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__CYGWIN__) || defined(__sun) || defined(_AIX) || defined(__MUSL__) || defined(__HAIKU__) || defined(__ANDROID__)
+        #if defined(_WIN32) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__CYGWIN__) || defined(__sun) || defined(_AIX) || defined(__MUSL__) || defined(__HAIKU__) || defined(__ANDROID__) || defined(__DragonFly__)
             // Simpler version for Windows and *BSD
             List trace = List::create(_["file"] = file,
                                       _[ "line"  ] = line,
