--- src/widgets/font_browser.cxx.orig	2024-01-07 18:53:32 UTC
+++ src/widgets/font_browser.cxx
@@ -32,6 +32,7 @@
 #include <cstring>
 #include <string>
 #include <cstdio>
+#include <pthread.h>
 #include <stdint.h>
 
 #include <FL/Fl.H>
