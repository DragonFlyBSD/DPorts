--- OrthancFramework/Resources/CMake/Compiler.cmake.orig
+++ OrthancFramework/Resources/CMake/Compiler.cmake
@@ -130,6 +130,7 @@
 
 
 if (${CMAKE_SYSTEM_NAME} STREQUAL "FreeBSD" OR
+    ${CMAKE_SYSTEM_NAME} STREQUAL "DragonFly" OR
     ${CMAKE_SYSTEM_NAME} STREQUAL "OpenBSD")
   # In FreeBSD/OpenBSD, the "/usr/local/" folder contains the ports and need to be imported
   SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -I/usr/local/include")
@@ -142,10 +143,12 @@
 if (${CMAKE_SYSTEM_NAME} STREQUAL "Linux" OR
     ${CMAKE_SYSTEM_NAME} STREQUAL "kFreeBSD" OR
     ${CMAKE_SYSTEM_NAME} STREQUAL "FreeBSD" OR
+    ${CMAKE_SYSTEM_NAME} STREQUAL "DragonFly" OR
     ${CMAKE_SYSTEM_NAME} STREQUAL "OpenBSD")
 
   if (# NOT ${CMAKE_SYSTEM_VERSION} STREQUAL "LinuxStandardBase" AND
       NOT ${CMAKE_SYSTEM_NAME} STREQUAL "OpenBSD" AND
+      NOT ${CMAKE_SYSTEM_NAME} STREQUAL "DragonFly" AND
       NOT ${CMAKE_SYSTEM_NAME} STREQUAL "FreeBSD")
     # The "--no-undefined" linker flag makes the shared libraries
     # (plugins ModalityWorklists and ServeFolders) fail to compile on
@@ -169,11 +172,13 @@
   endif()
 
   if (NOT ${CMAKE_SYSTEM_NAME} STREQUAL "FreeBSD" AND
+      NOT ${CMAKE_SYSTEM_NAME} STREQUAL "DragonFly" AND
       NOT ${CMAKE_SYSTEM_NAME} STREQUAL "OpenBSD")
     link_libraries(dl)
   endif()
 
   if (NOT ${CMAKE_SYSTEM_NAME} STREQUAL "FreeBSD" AND
+      NOT ${CMAKE_SYSTEM_NAME} STREQUAL "DragonFly" AND
       NOT ${CMAKE_SYSTEM_NAME} STREQUAL "OpenBSD")
     # The "--as-needed" linker flag is not available on FreeBSD and OpenBSD
     set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -Wl,--as-needed")
@@ -182,6 +187,7 @@
   endif()
 
   if (NOT ${CMAKE_SYSTEM_NAME} STREQUAL "FreeBSD" AND
+      NOT ${CMAKE_SYSTEM_NAME} STREQUAL "DragonFly" AND
       NOT ${CMAKE_SYSTEM_NAME} STREQUAL "OpenBSD")
     # FreeBSD/OpenBSD have just one single interface for file
     # handling, which is 64bit clean, so there is no need to define macro
