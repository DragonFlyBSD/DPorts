--- lib/io/FileSystem.cpp.orig	2019-05-19 05:31:21 UTC
+++ lib/io/FileSystem.cpp
@@ -8,6 +8,7 @@
 #ifdef SPH_USE_STD_EXPERIMENTAL
 #include <experimental/filesystem>
 #endif
+#include <climits>  // for PATH_MAX
 
 NAMESPACE_SPH_BEGIN
 
