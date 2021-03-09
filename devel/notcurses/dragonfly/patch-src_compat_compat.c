Include <osreldate.h> or more heavy <sys/param.h> for __DragonFly_version

--- src/compat/compat.c.orig	2021-02-10 00:34:03 UTC
+++ src/compat/compat.c
@@ -1,5 +1,8 @@
 #ifndef __linux__
 #ifndef __FreeBSD__
+#ifdef __DragonFly__
+#include <osreldate.h> /* for __DragonFly_version */
+#endif
 #include <time.h>
 #include <stdint.h>
 #include "compat/compat.h"
