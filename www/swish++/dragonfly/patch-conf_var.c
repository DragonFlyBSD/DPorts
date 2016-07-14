--- conf_var.c.orig	2005-11-17 06:01:03.000000000 +0200
+++ conf_var.c
@@ -23,6 +23,7 @@
 #include <cctype>
 #include <cstring>
 #include <iostream>
+#include <cstdlib> // for exit()
 
 // local
 #include "config.h"
