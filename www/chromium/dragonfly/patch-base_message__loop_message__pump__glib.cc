--- base/message_loop/message_pump_glib.cc.orig	2026-09-09 12:00:00 UTC
+++ base/message_loop/message_pump_glib.cc
@@ -6,6 +6,7 @@
 
 #include <fcntl.h>
 #include <glib.h>
+#include <poll.h>
 
 #if BUILDFLAG(IS_BSD)
 #include <pthread.h>
@@ -747,6 +748,14 @@
   }
 }
 
+_Static_assert(sizeof(GPollFD) == sizeof(pollfd),
+    "GPollFD struct size is different from pollfd struct size");
+
+static gint ppoll_wrapper(GPollFD *ufds, guint nfsd, gint timeout_) {
+  struct timespec ts = {timeout_ / 1000, (timeout_ % 1000) * 1000 * 1000};
+  return ppoll((pollfd *)ufds, nfsd, &ts, NULL);
+}
+
 void MessagePumpGlib::Run(Delegate* delegate) {
   RunState state(delegate);
 
