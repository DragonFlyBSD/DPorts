--- cmake/FindLibunwind.cmake.orig
+++ cmake/FindLibunwind.cmake
@@ -23,7 +23,7 @@
 
 
 find_path(LIBUNWIND_INCLUDE_DIR libunwind.h )
-if(CMAKE_SYSTEM_NAME MATCHES "FreeBSD")
+if(CMAKE_SYSTEM_NAME MATCHES "FreeBSD|DragonFly")
 # FreeBSD 14 doesn't install an <unwind.h> header with
 # the libunwind port, and in any case it is not needed.
 message(STATUS "Assuming there is a corresponding unwind.h")
