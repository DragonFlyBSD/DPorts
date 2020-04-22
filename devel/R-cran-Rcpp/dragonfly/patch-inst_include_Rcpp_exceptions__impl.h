--- inst/include/Rcpp/exceptions_impl.h.orig	2020-03-22 12:40:50 UTC
+++ inst/include/Rcpp/exceptions_impl.h
@@ -32,7 +32,8 @@
     defined(_AIX)        || \
     defined(__MUSL__)    || \
     defined(__HAIKU__)   || \
-    defined(__ANDROID__)
+    defined(__ANDROID__) || \
+    defined(__DragonFly__)
 #  define RCPP_DEMANGLER_ENABLED 0
 # elif defined(__GNUC__)  || defined(__clang__)
 #  include <execinfo.h>
