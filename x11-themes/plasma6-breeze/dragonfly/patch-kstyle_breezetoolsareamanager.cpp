--- kstyle/breezetoolsareamanager.cpp.orig
+++ kstyle/breezetoolsareamanager.cpp
@@ -96,9 +96,10 @@
 
 void ToolsAreaManager::removeWindow(const QMainWindow *window)
 {
-    std::erase_if(_windows, [window](const WindowToolBars &windowToolBars) {
-        return window == windowToolBars.window;
-    });
+    _windows.erase(std::remove_if(_windows.begin(), _windows.end(), [window](const WindowToolBars &windowToolBars) {
+                       return window == windowToolBars.window;
+                   }),
+                   _windows.end());
 }
 
 void ToolsAreaManager::registerApplication(QApplication *application)
