--- OrthancFramework/Resources/CMake/Compiler.cmake.orig	2021-11-14 14:58:17.111514000 +0100
+++ OrthancFramework/Resources/CMake/Compiler.cmake	2021-11-14 15:00:50.148107000 +0100
@@ -109,6 +109,7 @@
 
 
 if (${CMAKE_SYSTEM_NAME} STREQUAL "FreeBSD" OR
+	${CMAKE_SYSTEM_NAME} STREQUAL "DragonFly" OR
     ${CMAKE_SYSTEM_NAME} STREQUAL "OpenBSD")
   # In FreeBSD/OpenBSD, the "/usr/local/" folder contains the ports and need to be imported
   SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -I/usr/local/include")
@@ -121,9 +122,11 @@
 if (${CMAKE_SYSTEM_NAME} STREQUAL "Linux" OR
     ${CMAKE_SYSTEM_NAME} STREQUAL "kFreeBSD" OR
     ${CMAKE_SYSTEM_NAME} STREQUAL "FreeBSD" OR
+	${CMAKE_SYSTEM_NAME} STREQUAL "DragonFly" OR
     ${CMAKE_SYSTEM_NAME} STREQUAL "OpenBSD")
 
   if (NOT ${CMAKE_SYSTEM_NAME} STREQUAL "OpenBSD" AND
+	  NOT ${CMAKE_SYSTEM_NAME} STREQUAL "DragonFly" AND
       NOT ${CMAKE_SYSTEM_NAME} STREQUAL "FreeBSD")
     # The "--no-undefined" linker flag makes the shared libraries
     # (plugins ModalityWorklists and ServeFolders) fail to compile on
@@ -143,6 +146,7 @@
   endif()
 
   if (NOT ${CMAKE_SYSTEM_NAME} STREQUAL "FreeBSD" AND
+	  NOT ${CMAKE_SYSTEM_NAME} STREQUAL "DragonFly" AND
       NOT ${CMAKE_SYSTEM_NAME} STREQUAL "OpenBSD")
     link_libraries(dl)
   endif()
@@ -156,6 +160,7 @@
   endif()
 
   if (NOT ${CMAKE_SYSTEM_NAME} STREQUAL "FreeBSD" AND
+	  NOT ${CMAKE_SYSTEM_NAME} STREQUAL "DragonFly" AND
       NOT ${CMAKE_SYSTEM_NAME} STREQUAL "OpenBSD")
     # FreeBSD/OpenBSD have just one single interface for file
     # handling, which is 64bit clean, so there is no need to define macro
