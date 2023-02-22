--- cmake/QtBuild.cmake.intermediate	2023-02-19 13:38:19 UTC
+++ cmake/QtBuild.cmake
@@ -330,6 +330,8 @@ elseif(FREEBSD)
     elseif(GCC)
         set(QT_DEFAULT_MKSPEC freebsd-g++)
     endif()
+elseif(DRAGONFLY)
+    set(QT_DEFAULT_MKSPEC dragonfly-g++)
 elseif(NETBSD)
     set(QT_DEFAULT_MKSPEC netbsd-g++)
 elseif(OPENBSD)
