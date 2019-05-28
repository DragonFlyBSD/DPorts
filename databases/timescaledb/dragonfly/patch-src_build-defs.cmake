--- src/build-defs.cmake.orig	2019-05-06 17:49:37 UTC
+++ src/build-defs.cmake
@@ -29,7 +29,7 @@ include_directories(SYSTEM ${PG_INCLUDED
 
 # Only Windows and FreeBSD need the base include/ dir instead of include/server/, and including
 # both causes problems on Ubuntu where they frequently get out of sync
-if (WIN32 OR (CMAKE_SYSTEM_NAME STREQUAL "FreeBSD"))
+if (WIN32 OR (CMAKE_SYSTEM_NAME MATCHES "FreeBSD|DragonFly"))
   include_directories(SYSTEM ${PG_INCLUDEDIR})
 endif ()
 
