--- Source/Modules/CMakeBuildUtilities.cmake.orig	Wed Apr  2 14:01:07 2025
+++ Source/Modules/CMakeBuildUtilities.cmake	Wed Apr  2 14:01:27 2025
@@ -150,7 +150,7 @@ else()
   endif()
   set(_CMAKE_USE_OPENSSL_DEFAULT OFF)
   if(NOT DEFINED CMAKE_USE_OPENSSL AND NOT WIN32 AND NOT APPLE
-      AND CMAKE_SYSTEM_NAME MATCHES "(Linux|FreeBSD|CYGWIN|MSYS)")
+      AND CMAKE_SYSTEM_NAME MATCHES "(Linux|FreeBSD|DragonFly|CYGWIN|MSYS)")
     set(_CMAKE_USE_OPENSSL_DEFAULT ON)
   endif()
   option(CMAKE_USE_OPENSSL "Use OpenSSL." ${_CMAKE_USE_OPENSSL_DEFAULT})
