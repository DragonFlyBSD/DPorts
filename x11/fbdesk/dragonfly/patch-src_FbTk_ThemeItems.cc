--- src/FbTk/ThemeItems.cc.orig	2006-03-25 12:14:59 UTC
+++ src/FbTk/ThemeItems.cc
@@ -48,6 +48,7 @@
 
 #include <iostream>
 #include <memory>
+#include <strings.h>  // for strcasecmp()
 
 namespace FbTk {
 
