--- kde-modules/KDEMetaInfoPlatformCheck.cmake.orig	2023-12-20 10:53:51 UTC
+++ kde-modules/KDEMetaInfoPlatformCheck.cmake
@@ -42,6 +42,10 @@ if (NOT "${KF_IGNORE_PLATFORM_CHECK}")
                 if (CMAKE_SYSTEM_NAME MATCHES "FreeBSD")
                     set(_MetainfoFoundSupportedPlatform true)
                 endif()
+            elseif (${CMAKE_MATCH_1} STREQUAL "DragonFly")
+                if (CMAKE_SYSTEM_NAME MATCHES "DragonFly")
+                    set(_MetainfoFoundSupportedPlatform true)
+                endif()
             elseif (${CMAKE_MATCH_1} STREQUAL "OpenBSD")
                 if (CMAKE_SYSTEM_NAME MATCHES "OpenBSD")
                     set(_MetainfoFoundSupportedPlatform true)
