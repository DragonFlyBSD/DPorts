1
--- src/scalpel.h.orig
+++ src/scalpel.h
@@ -62,7 +62,7 @@
 #include "common.h"
 
 
-#ifdef __APPLE__
+#if defined(__APPLE__) || defined(__DragonFly__)
 #define __UNIX
 #include <sys/ttycom.h>
 #include <sys/param.h>
