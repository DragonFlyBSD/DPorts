--- ImageLounge/3rdparty/drif/drif_image.h.orig	2026-11-05 10:32:58 UTC
+++ ImageLounge/3rdparty/drif/drif_image.h
@@ -26,7 +26,7 @@
 #include <stdint.h>
 #include <stdio.h>
 
-#if defined(Q_OS_MAC) || defined(Q_OS_OPENBSD) || defined(Q_OS_FREEBSD)
+#if defined(Q_OS_MAC) || defined(Q_OS_OPENBSD) || defined(Q_OS_FREEBSD) || defined(Q_OS_DRAGONFLY)
 #include <stdlib.h>
 #else
 #include <malloc.h>
