--- kde-modules/KDEMetaInfoPlatformCheck.cmake.orig	2022-06-07 15:56:00 UTC
+++ kde-modules/KDEMetaInfoPlatformCheck.cmake
@@ -34,8 +34,8 @@ if (NOT "${KF_IGNORE_PLATFORM_CHECK}")
                 if (CMAKE_SYSTEM_NAME MATCHES "Linux")
                     set(_MetainfoFoundSupportedPlatform true)
                 endif()
-            elseif (${CMAKE_MATCH_1} STREQUAL "FreeBSD")
-                if (CMAKE_SYSTEM_NAME MATCHES "FreeBSD")
+            elseif (${CMAKE_MATCH_1} MATCHES "FreeBSD|DragonFly")
+                if (CMAKE_SYSTEM_NAME MATCHES "FreeBSD|DragonFly")
                     set(_MetainfoFoundSupportedPlatform true)
                 endif()
             elseif (${CMAKE_MATCH_1} STREQUAL "Windows")
