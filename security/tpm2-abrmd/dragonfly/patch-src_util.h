--- src/util.h.intermediate	2019-12-30 15:17:52.000000000 +0000
+++ src/util.h
@@ -9,13 +9,13 @@
 #include <glib.h>
 #include <gio/gio.h>
 #include <tss2/tss2_tpm2_types.h>
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/endian.h>
 #endif
 
 #include "control-message.h"
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #ifndef POLLRDHUP
 #define POLLRDHUP 0
 #endif
