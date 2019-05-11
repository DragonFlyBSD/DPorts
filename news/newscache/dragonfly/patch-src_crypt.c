--- src/NewsCache.cc.intermediate	2019-05-09 17:42:47.000000000 +0000
+++ src/NewsCache.cc
@@ -24,7 +24,7 @@
  */
 #include "config.h"
 
-#if !(defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__bsdi__))
+#if !(defined(__DragonFly__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__bsdi__))
 #include <crypt.h>
 #endif
 #include <ctype.h>
