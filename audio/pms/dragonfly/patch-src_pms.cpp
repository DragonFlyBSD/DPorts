--- src/pms.cpp.intermediate	2016-01-19 17:34:30.000000000 +0200
+++ src/pms.cpp
@@ -23,7 +23,7 @@
 
 #include "pms.h"
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/wait.h>
 #endif
 
