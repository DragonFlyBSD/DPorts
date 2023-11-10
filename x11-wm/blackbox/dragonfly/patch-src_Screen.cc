--- src/Screen.cc.orig	2023-10-28 08:17:49 UTC
+++ src/Screen.cc
@@ -48,6 +48,8 @@
 #include <ctype.h>
 #include <dirent.h>
 
+#include <cstring>
+#include <functional>
 
 static bool running = true;
 static int anotherWMRunning(Display *, XErrorEvent *) {
