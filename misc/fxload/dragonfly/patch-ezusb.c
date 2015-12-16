--- ezusb.c.orig	2013-10-09 01:46:11 UTC
+++ ezusb.c
@@ -52,6 +52,9 @@
 #include <sys/endian.h>
 #endif
 
+#ifdef __DragonFly__
+#include <sys/endian.h>
+#endif
 
 # include "ezusb.h"
 
