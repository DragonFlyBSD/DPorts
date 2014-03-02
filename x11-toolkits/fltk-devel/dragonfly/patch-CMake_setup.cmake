--- CMake/setup.cmake.intermediate	2014-03-02 12:13:59.783358000 +0000
+++ CMake/setup.cmake
@@ -56,7 +56,7 @@ if(APPLE)
    set(CMAKE_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS} -framework Cocoa")
 endif(APPLE)
 
-if(${CMAKE_SYSTEM_NAME} STREQUAL FreeBSD)
+if(${CMAKE_SYSTEM_NAME} STREQUAL DragonFly)
     set(HAVE_STRTOL 1)
     set(HAVE_STRCASECMP 1)
     set(HAVE_DIRENT_H 1)
