--- doinkd.h.intermediate	2019-12-26 13:25:48.000000000 +0000
+++ doinkd.h
@@ -1,7 +1,8 @@
 #include <sys/types.h>
 #include <stdio.h>
 #include <sys/param.h>
-#if defined(__FreeBSD_version) && __FreeBSD_version >= 900007
+#include <unistd.h>
+#if (defined(__FreeBSD_version) && __FreeBSD_version >= 900007) || defined(__DragonFly__)
 #define HAVE_UTMPX
 #else
 #include <utmp.h>
