--- src/llvm/cmake/modules/HandleLLVMOptions.cmake.orig	2017-06-06 00:46:29 UTC
+++ src/llvm/cmake/modules/HandleLLVMOptions.cmake
@@ -106,6 +106,7 @@ if(NOT (${TARGET_TRIPLE} MATCHES "darwin
         ${TARGET_TRIPLE} MATCHES "windows" OR
         ${TARGET_TRIPLE} MATCHES "mingw" OR
         ${TARGET_TRIPLE} MATCHES "freebsd" OR
+        ${TARGET_TRIPLE} MATCHES "dragonfly" OR
         ${TARGET_TRIPLE} MATCHES "netbsd" OR
         ${TARGET_TRIPLE} MATCHES "openbsd") AND
    NOT LLVM_USE_SANITIZER)
