--- src/core/signal/cs_internal.h.orig	2016-09-12 14:20:12.252316000 +0000
+++ src/core/signal/cs_internal.h
@@ -14,6 +14,7 @@
 #ifndef LIB_CS_INTERNAL_H
 #define LIB_CS_INTERNAL_H
 
+#include <functional> // for std::function
 #include <memory>
 #include <tuple>
 
