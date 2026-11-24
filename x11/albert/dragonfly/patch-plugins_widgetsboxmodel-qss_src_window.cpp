--- plugins/widgetsboxmodel-qss/src/window.cpp.orig
+++ plugins/widgetsboxmodel-qss/src/window.cpp
@@ -729,7 +729,7 @@
         if (auto have_dark_system_palette = haveDarkSystemPalette();
             dark_mode_ != have_dark_system_palette)
         {
-#if defined(Q_OS_LINUX) || defined(Q_OS_FREEBSD)
+#if defined(Q_OS_LINUX) || defined(Q_OS_FREEBSD) || defined(Q_OS_DRAGONFLY)
             QApplication::setPalette(QApplication::style()->standardPalette());
 #   else "Unknown architecture"
 #endif
