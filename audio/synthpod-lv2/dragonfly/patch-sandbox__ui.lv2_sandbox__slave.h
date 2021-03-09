--- sandbox_ui.lv2/sandbox_slave.h.orig	2019-04-07 08:13:44 UTC
+++ sandbox_ui.lv2/sandbox_slave.h
@@ -18,6 +18,7 @@
 #ifndef _SANDBOX_SLAVE_H
 #define _SANDBOX_SLAVE_H
 
+#include <sys/timespec.h> /* for struct timespec */
 #include <lv2/lv2plug.in/ns/lv2core/lv2.h>
 
 #ifdef __cplusplus
