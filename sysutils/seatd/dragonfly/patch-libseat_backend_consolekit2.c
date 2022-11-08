--- libseat/backend/consolekit2.c.intermediate	2022-11-06 20:25:35 UTC
+++ libseat/backend/consolekit2.c
@@ -22,7 +22,7 @@
 #include "libseat.h"
 #include "log.h"
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/param.h>
 
 static int dev_is_drm(dev_t device) {
