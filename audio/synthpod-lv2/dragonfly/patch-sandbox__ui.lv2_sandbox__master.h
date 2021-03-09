--- sandbox_ui.lv2/sandbox_master.h.orig	2019-04-07 08:13:44 UTC
+++ sandbox_ui.lv2/sandbox_master.h
@@ -18,6 +18,7 @@
 #ifndef _SANDBOX_MASTER_H
 #define _SANDBOX_MASTER_H
 
+#include <time.h> /* struct timespec */
 #include <lv2/lv2plug.in/ns/ext/urid/urid.h>
 
 #ifdef __cplusplus
