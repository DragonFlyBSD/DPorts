--- ext/posix/posix.c.intermediate	2014-01-30 12:21:08.287542000 +0000
+++ ext/posix/posix.c
@@ -68,7 +68,7 @@
 #include "lauxlib.h"
 #include "lua52compat.h"
 
-#ifdef __FreeBSD__
+#if defined __FreeBSD__ || defined __DragonFly__
 #define	O_DSYNC	O_SYNC
 #endif
 
