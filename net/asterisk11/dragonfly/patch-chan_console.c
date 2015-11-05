--- channels/chan_console.c.orig	2015-11-05 09:54:11.190595000 +0100
+++ channels/chan_console.c
@@ -60,6 +60,11 @@
 
 #include <portaudio.h>
 
+#if defined(__NetBSD__) || defined(__FreeBSD__) || defined(__DragonFly__)
+#include <pthread.h>
+#include <signal.h>
+#endif
+
 #include "asterisk/module.h"
 #include "asterisk/channel.h"
 #include "asterisk/pbx.h"
