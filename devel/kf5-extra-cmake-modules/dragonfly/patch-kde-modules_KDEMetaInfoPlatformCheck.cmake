--- kde-modules/KDEMetaInfoPlatformCheck.cmake.orig	2022-06-07 15:56:00 UTC
+++ kde-modules/KDEMetaInfoPlatformCheck.cmake
@@ -38,6 +38,10 @@ if (NOT "${KF_IGNORE_PLATFORM_CHECK}")
                 if (CMAKE_SYSTEM_NAME MATCHES "FreeBSD")
                     set(_MetainfoFoundSupportedPlatform true)
                 endif()
+            elseif (${CMAKE_MATCH_1} STREQUAL "DragonFly")
+                if (CMAKE_SYSTEM_NAME MATCHES "DragonFly")
+                    set(_MetainfoFoundSupportedPlatform true)
+                endif()
             elseif (${CMAKE_MATCH_1} STREQUAL "Windows")
                 if (WIN32)
                     set(_MetainfoFoundSupportedPlatform true)
