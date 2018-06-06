--- CMakeModules/SetupFGFSLibraries.cmake.intermediate	2018-06-06 01:04:58 UTC
+++ CMakeModules/SetupFGFSLibraries.cmake
@@ -77,7 +77,7 @@ function(setup_fgfs_libraries target)
        target_link_libraries(${target} ${AAX_LIBRARY})
     endif()
 
-    if(${CMAKE_SYSTEM_NAME} MATCHES "FreeBSD")
+    if(${CMAKE_SYSTEM_NAME} MATCHES "DragonFly")
         target_link_libraries(${target} execinfo)
     endif()
 endfunction()
