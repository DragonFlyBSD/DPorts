--- src/pipewire/private.h.orig	2021-06-16 11:38:39.784302000 +0200
+++ src/pipewire/private.h	2021-06-16 11:43:30.787735000 +0200
@@ -44,6 +44,10 @@
 };
 #endif
 
+#ifdef __DragonFly__
+#include <sys/ucred.h>
+#endif
+
 #ifndef spa_debug
 #define spa_debug(...) pw_log_trace(__VA_ARGS__)
 #endif
