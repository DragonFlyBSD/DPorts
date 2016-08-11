--- purge.cc.orig	2000-09-21 15:05:31.000000000 +0200
+++ purge.cc
@@ -121,7 +121,7 @@ typedef int bool;
 #include <signal.h>
 #include <errno.h>
 
-#if defined(HAS_PSIGNAL) && !defined(LINUX) && !defined(FREEBSD)
+#if defined(HAS_PSIGNAL) && !defined(LINUX) && !defined(FREEBSD) && !defined(DRAGONFLY)
 #include <siginfo.h>
 #endif // HAS_PSIGNAL
 
