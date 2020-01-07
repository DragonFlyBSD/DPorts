--- src/FbTk/Theme.cc.orig	2006-03-25 12:02:08 UTC
+++ src/FbTk/Theme.cc
@@ -34,6 +34,7 @@
 #else
   #include <stdio.h>
 #endif
+#include <algorithm>
 #include <memory>
 #include <iostream>
 
