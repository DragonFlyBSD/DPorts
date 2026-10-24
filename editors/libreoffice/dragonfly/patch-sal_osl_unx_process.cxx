--- sal/osl/unx/process.cxx.orig
+++ sal/osl/unx/process.cxx
@@ -45,7 +45,7 @@
 #include <machine/param.h>
 #endif
 
-#if defined(IOS) || defined(FREEBSD)
+#if defined(IOS) || defined(FREEBSD) || defined(DRAGONFLY)
 #include <signal.h>
 #endif
 
