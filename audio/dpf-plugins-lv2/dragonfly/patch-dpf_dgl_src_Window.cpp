--- dpf/dgl/src/Window.cpp.intermediate	2019-06-08 16:11:07.000000000 +0000
+++ dpf/dgl/src/Window.cpp
@@ -51,7 +51,7 @@ extern "C" {
 #include "../StandaloneWindow.hpp"
 #include "../../distrho/extra/String.hpp"
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <unistd.h>
 #endif
 
@@ -1220,7 +1220,7 @@ bool Window::openFileBrowser(const FileB
 #  ifdef DISTRHO_OS_LINUX
     if (startDir.isEmpty())
     {
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
         char buf[1024];
         if (char* const dir_name = ::getwd(buf))
 #else
