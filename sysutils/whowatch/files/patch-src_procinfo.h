--- src/procinfo.h.orig	2018-04-11 06:10:50 UTC
+++ src/procinfo.h
@@ -1,6 +1,9 @@
 #ifdef HAVE_PROCESS_SYSCTL
 #include <sys/param.h>
 #include <sys/sysctl.h>
+#ifdef __DragonFly__
+#include <sys/user.h>
+#endif
 #include <sys/proc.h>
 #include <sys/stat.h>
 #endif
