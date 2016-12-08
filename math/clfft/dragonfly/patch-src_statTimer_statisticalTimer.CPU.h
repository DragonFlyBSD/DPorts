--- src/statTimer/statisticalTimer.CPU.h.orig	2016-09-01 00:46:51.000000000 +0300
+++ src/statTimer/statisticalTimer.CPU.h
@@ -21,7 +21,7 @@
 #include <iosfwd>
 #include <vector>
 #include <algorithm>
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/timespec.h>
 #endif
 #include "statisticalTimer.h"
