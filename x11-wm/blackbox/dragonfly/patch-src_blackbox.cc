--- src/blackbox.cc.orig	2023-10-28 08:17:18 UTC
+++ src/blackbox.cc
@@ -41,6 +41,8 @@
 #include <stdlib.h>
 #include <unistd.h>
 
+#include <functional>
+
 // #define FOCUS_DEBUG
 #ifdef FOCUS_DEBUG
 static const char *Mode[] = {
