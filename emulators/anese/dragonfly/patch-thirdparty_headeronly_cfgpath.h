--- thirdparty/headeronly/cfgpath.h.intermediate	2019-09-05 10:46:24.000000000 +0000
+++ thirdparty/headeronly/cfgpath.h
@@ -39,7 +39,7 @@
 #define mkdir _mkdir
 #endif
 
-#if defined(__linux__) || defined(__APPLE__) || defined(__FreeBSD__)
+#if defined(__linux__) || defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #include <string.h>
 #include <stdlib.h>
 #include <sys/stat.h>
