--- modules/ECMGenerateExportHeader.cmake.orig
+++ modules/ECMGenerateExportHeader.cmake
@@ -626,6 +626,9 @@
             set(_use_std_attribute TRUE)
         endif()
     endif()
+    # DragonFly: consumers built with base gcc 12 include these headers, and
+    # gcc 12 rejects [[deprecated]] mixed with the GNU visibility attribute.
+    set(_use_std_attribute FALSE)
 
     if(NOT IS_ABSOLUTE ${ARGS_EXPORT_FILE_NAME})
         set(ARGS_EXPORT_FILE_NAME "${CMAKE_CURRENT_BINARY_DIR}/${ARGS_EXPORT_FILE_NAME}")
