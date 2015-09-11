--- src/entropy.c.orig	2012-05-04 00:08:27.000000000 +0300
+++ src/entropy.c
@@ -39,6 +39,8 @@
 #include "freebsd.h"
 #elif defined(__OpenBSD__)
 #include "openbsd.h"
+#elif defined(__DragonFly__)
+#include "dragonfly.h"
 #endif
 
 static struct {
