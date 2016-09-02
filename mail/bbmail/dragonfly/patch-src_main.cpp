--- src/main.cpp.intermediate	2016-07-09 19:14:32 UTC
+++ src/main.cpp
@@ -23,6 +23,8 @@
 #include "main.h"
 #include "config.h"
 #include <cstdlib>
+#include <cstdio>  // for fprintf sscanf stderr stdout
+#include <cstring> // for strcmp
 
 Configuration::Configuration(int iargc, char **iargv)
 {
