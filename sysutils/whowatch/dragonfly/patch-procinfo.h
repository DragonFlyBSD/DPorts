--- procinfo.h.orig	2000-06-06 09:03:19.000000000 +0000
+++ procinfo.h
@@ -1,7 +1,11 @@
 #ifdef HAVE_PROCESS_SYSCTL
 #include <sys/param.h>
 #include <sys/sysctl.h>
+#ifdef __DragonFly__
+#include <sys/user.h>
+#else
 #include <sys/proc.h>
+#endif
 #include <sys/stat.h>
 #endif
 
