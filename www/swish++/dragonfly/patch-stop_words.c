--- stop_words.c.orig	2005-01-02 22:10:26.000000000 +0200
+++ stop_words.c
@@ -21,6 +21,7 @@
 
 // standard
 #include <cctype>
+#include <cstdlib> // for exit()
 
 // local
 #include "config.h"
