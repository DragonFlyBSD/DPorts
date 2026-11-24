--- qtutilities/cmake/modules/QtGuiConfig.cmake.orig
+++ qtutilities/cmake/modules/QtGuiConfig.cmake
@@ -121,6 +121,8 @@
         else ()
             set(CHANGED_QML_FILE "${CMAKE_CURRENT_BINARY_DIR}/qmltmp/${QML_FILE}")
         endif ()
+        get_filename_component(CHANGED_QML_DIR "${CHANGED_QML_FILE}" DIRECTORY)
+        file(MAKE_DIRECTORY "${CHANGED_QML_DIR}")
         add_custom_command(
             DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/${QML_FILE}"
             OUTPUT "${CHANGED_QML_FILE}"
