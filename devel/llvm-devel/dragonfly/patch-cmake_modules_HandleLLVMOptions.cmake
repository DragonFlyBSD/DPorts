--- cmake/modules/HandleLLVMOptions.cmake.orig	2015-12-07 08:29:31 UTC
+++ cmake/modules/HandleLLVMOptions.cmake
@@ -133,6 +133,7 @@ endif()
 # build might work on ELF but fail on MachO/COFF.
 if(NOT (${CMAKE_SYSTEM_NAME} MATCHES "Darwin" OR WIN32 OR CYGWIN OR
         ${CMAKE_SYSTEM_NAME} MATCHES "FreeBSD" OR
+        ${CMAKE_SYSTEM_NAME} MATCHES "DragonFly" OR
         ${CMAKE_SYSTEM_NAME} MATCHES "OpenBSD") AND
    NOT LLVM_USE_SANITIZER)
   set(CMAKE_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS} -Wl,-z,defs")
