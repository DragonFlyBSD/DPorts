--- src/common.c.orig	2012-05-04 00:08:27.000000000 +0300
+++ src/common.c
@@ -54,6 +54,8 @@
 #include "freebsd.h"
 #elif defined(__OpenBSD__)
 #include "openbsd.h"
+#elif defined(__DragonFly__)
+#include "dragonfly.h"
 #endif
 
 /* folds a string over top of itself, like so:
