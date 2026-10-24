--- src/cmake/externalpackages.cmake.orig	2025-12-01 12:53:35 UTC
+++ src/cmake/externalpackages.cmake
@@ -58,7 +58,7 @@ checked_find_package (LLVM REQUIRED
 # LLVM library setup
 checked_find_package (LLVM REQUIRED
                       VERSION_MIN 11.0
-                      VERSION_MAX 21.9
+                      VERSION_MAX 22.9
                       PRINT LLVM_SYSTEM_LIBRARIES CLANG_LIBRARIES
                             LLVM_SHARED_MODE)
 # ensure include directory is added (in case of non-standard locations
