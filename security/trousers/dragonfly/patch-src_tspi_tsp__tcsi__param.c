--- src/tspi/tsp_tcsi_param.c.intermediate	2026-09-05 02:48:17 UTC
+++ src/tspi/tsp_tcsi_param.c
@@ -13,7 +13,7 @@
 #include <stdio.h>
 
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/param.h>
 #define        HOST_NAME_MAX   MAXHOSTNAMELEN
 #elif !defined(__APPLE__)
