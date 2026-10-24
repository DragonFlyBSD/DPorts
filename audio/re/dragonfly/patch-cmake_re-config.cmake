--- cmake/re-config.cmake.orig	2026-09-30 17:40:28 UTC
+++ cmake/re-config.cmake
@@ -77,7 +77,7 @@
 else()
   check_symbol_exists(res_ninit resolv.h HAVE_RESOLV)
 endif()
-if(HAVE_RESOLV AND ${CMAKE_SYSTEM_NAME} MATCHES "FreeBSD")
+if(HAVE_RESOLV AND ${CMAKE_SYSTEM_NAME} MATCHES "FreeBSD|DragonFly")
   list(APPEND RE_DEFINITIONS HAVE_RESOLV)
   set(RESOLV_LIBRARY) # Provided by libc
 elseif(HAVE_RESOLV)
