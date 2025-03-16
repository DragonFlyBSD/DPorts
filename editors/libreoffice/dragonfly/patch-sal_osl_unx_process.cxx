--- sal/osl/unx/process.cxx.ori	Wed Feb 19 21:13:33 2025
+++ sal/osl/unx/process.cxx	Wed Feb 19 21:15:06 2025
@@ -45,7 +45,7 @@
 #include <machine/param.h>
 #endif
 
-#if defined (IOS) || defined(FREEBSD)
+#if defined (IOS) || defined(FREEBSD) || defined(DRAGONFLY)
 #include <signal.h>
 #endif
 
