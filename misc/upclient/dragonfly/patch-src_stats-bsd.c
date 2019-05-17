--- src/stats-bsd.c.intermediate	2019-05-14 13:25:22 UTC
+++ src/stats-bsd.c
@@ -55,7 +55,11 @@
 #include <string.h>
 #include <syslog.h>
 #include <unistd.h>
+#ifdef __DragonFly__
+#include <sys/resource.h>
+#else
 #include <sys/dkstat.h>
+#endif
 #include <sys/param.h>
 #if defined __FreeBSD__ && __FreeBSD_Version
 #   if __FreeBSD_version >= 500000
