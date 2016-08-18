--- common.h.orig	2010-11-05 15:56:22.000000000 +0200
+++ common.h
@@ -84,6 +84,10 @@
 #include <sched.h>
 #endif
 
+#ifdef OS_DRAGONFLY
+#include <sched.h>
+#endif
+
 #ifdef OS_WINDOWS
 #ifdef  ATOM
 #define GOTO_ATOM ATOM
