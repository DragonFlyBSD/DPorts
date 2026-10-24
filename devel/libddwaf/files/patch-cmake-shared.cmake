--- cmake/shared.cmake.orig	2026-07-01 03:14:24 UTC
+++ cmake/shared.cmake
@@ -38,9 +38,9 @@ if(LINUX)
             COMMAND ${CMAKE_STRIP} --only-keep-debug ${SYMBOL_FILE}
             COMMAND ${CMAKE_STRIP} $<TARGET_FILE:libddwaf_shared>)
 
-        install(FILES ${SYMBOL_FILE}
-            DESTINATION ${CMAKE_INSTALL_LIBDIR}/.build-id/${BUILD_ID_PREFIX}
-            RENAME ${BUILD_ID_SUFFIX}.debug)
+        #install(FILES ${SYMBOL_FILE}
+        #    DESTINATION ${CMAKE_INSTALL_LIBDIR}/.build-id/${BUILD_ID_PREFIX}
+        #    RENAME ${BUILD_ID_SUFFIX}.debug)
     endif()
 elseif (APPLE)
     target_link_libraries(libddwaf_shared PRIVATE -Wl,-undefined,error libddwaf_shared_objects)
