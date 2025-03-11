diff --git base/message_loop/message_pump_glib.cc base/message_loop/message_pump_glib.cc
index e07537d654fa..60f6d8a617c4 100644
--- base/message_loop/message_pump_glib.cc
+++ base/message_loop/message_pump_glib.cc
@@ -7,6 +7,7 @@
 #include <fcntl.h>
 #include <glib.h>
 #include <math.h>
+#include <poll.h>
 
 #if BUILDFLAG(IS_BSD)
 #include <pthread.h>
@@ -664,6 +665,14 @@ void MessagePumpGlib::HandleDispatch() {
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
 
