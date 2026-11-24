--- plugins/widgetsboxmodel/src/window.cpp.orig
+++ plugins/widgetsboxmodel/src/window.cpp
@@ -1089,7 +1089,7 @@
 
     else if (event->type() == QEvent::ThemeChange)
     {
-#if defined(Q_OS_LINUX) || defined(Q_OS_FREEBSD)
+#if defined(Q_OS_LINUX) || defined(Q_OS_FREEBSD) || defined(Q_OS_DRAGONFLY)
         // No automatic palette update on GNOME
         QApplication::setPalette(QApplication::style()->standardPalette());
 #else
