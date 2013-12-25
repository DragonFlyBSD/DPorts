--- src/api.cpp.orig	2013-10-29 01:24:28.000000000 +0000
+++ src/api.cpp
@@ -1540,7 +1540,9 @@ const char* short_file_name(const char*
 }
 
 #if defined(__GNUC__)
-#if defined(WIN32) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__CYGWIN__) || defined(__sun)
+#if defined(WIN32) || defined(__FreeBSD__) || defined(__NetBSD__) \
+ || defined(__OpenBSD__) || defined(__CYGWIN__) || defined(__sun) \
+ || defined(__DragonFly__)
 // Simpler version for Windows and *BSD 
 SEXP stack_trace( const char* file, int line ){
     Rcpp::List trace = Rcpp::List::create( 
