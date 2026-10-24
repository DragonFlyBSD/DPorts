-- FreeBSD has no libresolv or librt.  Add a FreeBSD-specific link set
-- that links the base system libraries used by docling-parse.
--- cmake/os_opts.cmake.orig	2026-07-01 07:01:36 UTC
+++ cmake/os_opts.cmake
@@ -22,12 +22,20 @@ elseif(APPLE)
    find_library(SystemConfigurationLib SystemConfiguration)
    #message("LIB: ${SystemConfigurationLib}")
 
-   # set(LIB_LINK qpdf jpeg utf8 z)	
+   # set(LIB_LINK qpdf jpeg utf8 z)
    set(OS_DEPENDENCIES ZLIB::ZLIB)
 
 
    set(LIB_LINK ${FoundationLib} ${SystemConfigurationLib})
-   
+
+elseif(CMAKE_SYSTEM_NAME STREQUAL "FreeBSD")
+   message(STATUS "compiling on freebsd")
+
+   # set(LIB_LINK qpdf jpeg utf8 z)
+   find_package(ZLIB)
+   set(LIB_LINK dl m pthread)
+   set(OS_DEPENDENCIES ZLIB::ZLIB)
+
 elseif(UNIX)
    message(STATUS "compiling on linux")
 
