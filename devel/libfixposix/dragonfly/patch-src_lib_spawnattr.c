--- src/lib/spawnattr.c.orig	2018-02-19 22:24:10 UTC
+++ src/lib/spawnattr.c
@@ -33,7 +33,11 @@
 #include <stdio.h>
 #include <limits.h>
 #include <sys/ioctl.h>
+#if !defined(__DragonFly__) && !defined(__FreeBSD__)
 #include <sys/termios.h>
+#else
+#include <termios.h>
+#endif
 
 #include "spawn.h"
 
