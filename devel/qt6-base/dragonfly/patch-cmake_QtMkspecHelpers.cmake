--- cmake/QtMkspecHelpers.cmake.orig	2024-02-08 16:01:05 UTC
+++ cmake/QtMkspecHelpers.cmake
@@ -85,6 +85,12 @@ macro(qt_internal_setup_platform_definit
         elseif(GCC)
             set(QT_DEFAULT_MKSPEC freebsd-g++)
         endif()
+    elseif(DRAGONFLY)
+        if(CLANG)
+            set(QT_DEFAULT_MKSPEC dragonfly-clang)
+        elseif(GCC)
+            set(QT_DEFAULT_MKSPEC dragonfly-g++)
+        endif()
     elseif(NETBSD)
         set(QT_DEFAULT_MKSPEC netbsd-g++)
     elseif(OPENBSD)
