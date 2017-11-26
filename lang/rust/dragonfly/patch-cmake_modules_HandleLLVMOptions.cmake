--- src/llvm/cmake/modules/HandleLLVMOptions.cmake.orig	2017-06-26 10:55:45.047965000 +0200
+++ src/llvm/cmake/modules/HandleLLVMOptions.cmake	2017-06-26 10:55:52.978184000 +0200
@@ -106,6 +106,7 @@
         ${TARGET_TRIPLE} MATCHES "windows" OR
         ${TARGET_TRIPLE} MATCHES "mingw" OR
         ${TARGET_TRIPLE} MATCHES "freebsd" OR
+        ${TARGET_TRIPLE} MATCHES "dragonfly" OR
         ${TARGET_TRIPLE} MATCHES "netbsd" OR
         ${TARGET_TRIPLE} MATCHES "openbsd") AND
    NOT LLVM_USE_SANITIZER)
