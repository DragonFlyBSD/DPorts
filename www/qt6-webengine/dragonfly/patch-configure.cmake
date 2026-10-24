--- configure.cmake.intermediate	2026-09-17 07:06:56 UTC
+++ configure.cmake
@@ -124,7 +124,7 @@ if(Python3_EXECUTABLE)
     )
 endif()
 
-if(LINUX)
+if(LINUX OR FREEBSD)
    qt_webengine_configure_check_for_ulimit()
 endif()
 
@@ -310,12 +310,12 @@ unset(targets_to_check)
 
 qt_webengine_configure_check("supported-platform"
     MODULES QtWebEngine
-    CONDITION LINUX OR WIN32 OR MACOS OR FREEBSD
+    CONDITION LINUX OR WIN32 OR MACOS OR FREEBSD OR DRAGONFLY
     MESSAGE "Build can be done only on Linux, Windows or macOS."
 )
 qt_webengine_configure_check("supported-platform"
     MODULES QtPdf
-    CONDITION LINUX OR WIN32 OR MACOS OR IOS OR ANDROID OR FREEBSD
+    CONDITION LINUX OR WIN32 OR MACOS OR IOS OR ANDROID OR FREEBSD OR DRAGONFLY
     MESSAGE "Build can be done only on Linux, Windows, macO, iOS and Android."
 )
 
@@ -427,6 +427,8 @@ qt_webengine_configure_check("compiler"
         (LINUX AND CMAKE_CXX_COMPILER_ID STREQUAL "Clang") OR
         (FREEBSD AND CMAKE_CXX_COMPILER_ID STREQUAL "GNU") OR
         (FREEBSD AND CMAKE_CXX_COMPILER_ID STREQUAL "Clang") OR
+        (DRAGONFLY AND CMAKE_CXX_COMPILER_ID STREQUAL "GNU") OR
+        (DRAGONFLY AND CMAKE_CXX_COMPILER_ID STREQUAL "Clang") OR
         (MACOS AND CMAKE_CXX_COMPILER_ID STREQUAL "AppleClang")
     MESSAGE
         "${CMAKE_CXX_COMPILER_ID} compiler is not supported."
@@ -438,6 +440,8 @@ qt_webengine_configure_check("compiler"
         (LINUX AND CMAKE_CXX_COMPILER_ID STREQUAL "Clang") OR
         (FREEBSD AND CMAKE_CXX_COMPILER_ID STREQUAL "GNU") OR
         (FREEBSD AND CMAKE_CXX_COMPILER_ID STREQUAL "Clang") OR
+        (DRAGONFLY AND CMAKE_CXX_COMPILER_ID STREQUAL "GNU") OR
+        (DRAGONFLY AND CMAKE_CXX_COMPILER_ID STREQUAL "Clang") OR
         (APPLE AND CMAKE_CXX_COMPILER_ID STREQUAL "AppleClang") OR
         (ANDROID AND CMAKE_CXX_COMPILER_ID STREQUAL "Clang") OR
         (MINGW AND CMAKE_CXX_COMPILER_ID STREQUAL "GNU") OR
@@ -787,7 +791,7 @@ qt_feature("webengine-rust-build" PRIVATE
 
 qt_feature("webengine-ozone-x11" PRIVATE
     LABEL "Support X11 on qpa-xcb"
-    CONDITION LINUX OR FREEBSD
+    CONDITION LINUX OR FREEBSD OR DRAGONFLY
         AND TARGET Qt::Gui
         AND QT_FEATURE_xcb
         AND qpa_xcb_support_check
