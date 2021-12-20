--- tsl/src/build-defs.cmake.orig	2021-09-20 17:30:43 UTC
+++ tsl/src/build-defs.cmake
@@ -36,7 +36,7 @@ include_directories(SYSTEM ${PG_INCLUDED
 # Only Windows and FreeBSD need the base include/ dir instead of
 # include/server/, and including both causes problems on Ubuntu where they
 # frequently get out of sync
-if(WIN32 OR (CMAKE_SYSTEM_NAME STREQUAL "FreeBSD"))
+if(WIN32 OR (CMAKE_SYSTEM_NAME MATCHES "FreeBSD|DragonFly"))
   include_directories(SYSTEM ${PG_INCLUDEDIR})
 endif()
 
