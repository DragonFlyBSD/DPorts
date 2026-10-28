--- CMakeModules/UseCompat.cmake.orig	2026-10-26 01:47:15 UTC
+++ CMakeModules/UseCompat.cmake
@@ -51,11 +51,19 @@ macro(USE_COMPAT)
 
     check_include_file("stdatomic.h" HAVE_STDATOMIC)
 
+    if(CMAKE_SYSTEM_NAME STREQUAL "DragonFly")
+        # sys/cdefs.h ignores __BSD_VISIBLE and _DEFAULT_SOURCE, so under
+        # _POSIX_C_SOURCE alone the XSI realpath() and strptime() are hidden
+        list(APPEND CMAKE_REQUIRED_DEFINITIONS -D_XOPEN_SOURCE=700)
+    endif()
     check_symbol_exists(realpath "stdlib.h" HAVE_REALPATH)
     check_symbol_exists(localtime_r "time.h" HAVE_LOCALTIME_R)
     check_symbol_exists(gmtime_r "time.h" HAVE_GMTIME_R)
     check_function_exists(timegm HAVE_TIMEGM)
     check_symbol_exists(strptime "time.h" HAVE_STRPTIME)
+    if(CMAKE_SYSTEM_NAME STREQUAL "DragonFly")
+        list(REMOVE_ITEM CMAKE_REQUIRED_DEFINITIONS -D_XOPEN_SOURCE=700)
+    endif()
     check_symbol_exists(mmap "sys/mman.h" HAVE_MMAP)
     check_symbol_exists(setenv "stdlib.h" HAVE_SETENV)
 
