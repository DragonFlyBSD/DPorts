--- kdevplatform/cmake/modules/KDevPlatformMacros.cmake.orig	2019-03-07 07:08:08 UTC
+++ kdevplatform/cmake/modules/KDevPlatformMacros.cmake
@@ -55,7 +55,7 @@ macro(kdevplatform_create_template_archi
         )
     else()
 
-        if(APPLE OR CMAKE_SYSTEM_NAME STREQUAL "FreeBSD")
+        if(APPLE OR CMAKE_SYSTEM_NAME STREQUAL "FreeBSD" OR CMAKE_SYSTEM_NAME STREQUAL "DragonFly")
             add_custom_command(OUTPUT ${_template}
                 COMMAND tar ARGS -c -C ${CMAKE_CURRENT_SOURCE_DIR}/${_templateName}
                     --exclude .kdev_ignore --exclude .svn --numeric-owner
