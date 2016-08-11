--- cmake/modules/HandleLLVMOptions.cmake.orig	2016-05-12 13:18:31.000000000 +0300
+++ cmake/modules/HandleLLVMOptions.cmake
@@ -132,7 +132,7 @@ endif()
 # Pass -Wl,-z,defs. This makes sure all symbols are defined. Otherwise a DSO
 # build might work on ELF but fail on MachO/COFF.
 if(NOT (${CMAKE_SYSTEM_NAME} MATCHES "Darwin" OR WIN32 OR CYGWIN OR
-        ${CMAKE_SYSTEM_NAME} MATCHES "FreeBSD") AND
+        ${CMAKE_SYSTEM_NAME} MATCHES "FreeBSD|DragonFly") AND
    NOT LLVM_USE_SANITIZER)
   set(CMAKE_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS} -Wl,-z,defs")
 endif()
