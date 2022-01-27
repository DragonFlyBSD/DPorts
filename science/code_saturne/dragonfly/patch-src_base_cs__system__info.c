--- src/base/cs_system_info.c.orig	2021-12-21 17:01:03 UTC
+++ src/base/cs_system_info.c
@@ -34,7 +34,7 @@
 #include <string.h>
 #include <time.h>
 
-#if defined(__linux__)
+#if defined(__linux__) || defined(__DragonFly__)
 #include <stdio.h>
 #endif
 
