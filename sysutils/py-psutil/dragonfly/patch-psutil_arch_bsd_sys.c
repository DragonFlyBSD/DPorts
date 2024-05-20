--- psutil/arch/bsd/sys.c.orig	2023-06-01 16:41:59 UTC
+++ psutil/arch/bsd/sys.c
@@ -18,6 +18,8 @@
     #include <utmpx.h>
 #elif PSUTIL_OPENBSD
     #include <utmp.h>
+#elif PSUTIL_DRAGONFLY
+    #include <utmpx.h>
 #endif
 
 
