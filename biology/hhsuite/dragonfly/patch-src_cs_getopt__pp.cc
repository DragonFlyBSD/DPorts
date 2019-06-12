--- src/cs/getopt_pp.cc.intermediate	2019-05-30 14:47:07.000000000 +0000
+++ src/cs/getopt_pp.cc
@@ -21,7 +21,7 @@
 #include <unistd.h>
 #include "getopt_pp.h"
 
-#if defined(__APPLE__) || defined(__FreeBSD__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
 extern char** environ;
 #endif
 
