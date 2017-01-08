Just as in devel/llvm39
--- cmake/modules/HandleLLVMOptions.cmake.orig	2016-12-29 15:49:07.000000000 +0200
+++ cmake/modules/HandleLLVMOptions.cmake
@@ -103,6 +103,7 @@ endif()
 # Pass -Wl,-z,defs. This makes sure all symbols are defined. Otherwise a DSO
 # build might work on ELF but fail on MachO/COFF.
 if(NOT (${CMAKE_SYSTEM_NAME} MATCHES "Darwin" OR WIN32 OR CYGWIN OR
+        ${CMAKE_SYSTEM_NAME} MATCHES "DragonFly" OR
         ${CMAKE_SYSTEM_NAME} MATCHES "FreeBSD" OR
         ${CMAKE_SYSTEM_NAME} MATCHES "OpenBSD") AND
    NOT LLVM_USE_SANITIZER)
