--- src/hwcaps_freebsd_or_openbsd.c.orig	2026-06-01 12:49:57 UTC
+++ src/hwcaps_freebsd_or_openbsd.c
@@ -14,7 +14,8 @@
 
 #include "cpu_features_macros.h"
 
-#if defined(CPU_FEATURES_OS_FREEBSD) || defined(CPU_FEATURES_OS_OPENBSD)
+#if (defined(CPU_FEATURES_OS_FREEBSD) && !defined(__DragonFly__)) || \
+    defined(CPU_FEATURES_OS_OPENBSD)
 
 #include "internal/hwcaps.h"
 
