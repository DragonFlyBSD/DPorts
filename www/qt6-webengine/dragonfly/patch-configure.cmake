--- configure.cmake.intermediate	2024-01-26 07:43:44 UTC
+++ configure.cmake
@@ -66,7 +66,7 @@ if(Python3_EXECUTABLE)
 endif()
 
 #### Tests
-if(LINUX OR FREEBSD)
+if(LINUX OR FREEBSD OR DRAGONFLY)
    check_for_ulimit()
 endif()
 
@@ -434,7 +434,7 @@ qt_feature("webengine-system-libpci" PRI
 
 qt_feature("webengine-ozone-x11" PRIVATE
     LABEL "Support GLX on qpa-xcb"
-    CONDITION LINUX OR FREEBSD
+    CONDITION LINUX OR FREEBSD OR DRAGONFLY
         AND TARGET Qt::Gui
         AND QT_FEATURE_xcb
         AND X11_FOUND
@@ -471,12 +471,12 @@ assertTargets(
 )
 add_check_for_support(
    MODULES QtWebEngine
-   CONDITION LINUX OR (WIN32 AND NOT WIN_ARM_64) OR MACOS OR FREEBSD
+   CONDITION LINUX OR (WIN32 AND NOT WIN_ARM_64) OR MACOS OR FREEBSD OR DRAGONFLY
    MESSAGE "Build can be done only on Linux, Windows or macOS."
 )
 add_check_for_support(
    MODULES QtPdf
-   CONDITION LINUX OR (WIN32 AND NOT WIN_ARM_64) OR MACOS OR IOS OR (ANDROID AND NOT CMAKE_HOST_WIN32) OR FREEBSD
+   CONDITION LINUX OR (WIN32 AND NOT WIN_ARM_64) OR MACOS OR IOS OR (ANDROID AND NOT CMAKE_HOST_WIN32) OR FREEBSD OR DRAGONFLY
    MESSAGE "Build can be done only on Linux, Windows, macO, iOS and Android(on non-Windows hosts only)."
 )
 if(LINUX AND CMAKE_CROSSCOMPILING)
@@ -579,6 +579,8 @@ add_check_for_support(
        (LINUX AND CMAKE_CXX_COMPILER_ID STREQUAL Clang) OR
        (FREEBSD AND CMAKE_CXX_COMPILER_ID STREQUAL GNU) OR
        (FREEBSD AND CMAKE_CXX_COMPILER_ID STREQUAL Clang) OR
+       (DRAGONFLY AND CMAKE_CXX_COMPILER_ID STREQUAL GNU) OR
+       (DRAGONFLY AND CMAKE_CXX_COMPILER_ID STREQUAL Clang) OR
        (WIN32 AND CMAKE_CXX_COMPILER_ID STREQUAL MSVC) OR
        (WIN32 AND CMAKE_CXX_COMPILER_ID STREQUAL Clang AND
           CMAKE_CXX_SIMULATE_ID STREQUAL MSVC) OR
