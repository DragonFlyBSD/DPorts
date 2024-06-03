diff --git base/message_loop/message_pump_glib.cc base/message_loop/message_pump_glib.cc
index 6f4135f5c56..60ed6aaf0a6 100644
--- src/3rdparty/chromium/base/message_loop/message_pump_glib.cc
+++ src/3rdparty/chromium/base/message_loop/message_pump_glib.cc
@@ -7,6 +7,7 @@
 #include <fcntl.h>
 #include <glib.h>
 #include <math.h>
+#include <poll.h>
 
 #if BUILDFLAG(IS_BSD)
 #include <pthread.h>
@@ -383,6 +384,14 @@ void MessagePumpGlib::HandleDispatch() {
   state_->next_work_info = state_->delegate->DoWork();
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
   RunState state;
   state.delegate = delegate;
@@ -406,7 +415,15 @@ void MessagePumpGlib::Run(Delegate* delegate) {
     // Don't block if we think we have more work to do.
     bool block = !more_work_is_plausible;
 
+    GPollFunc poll_func = NULL;
+    if (high_res_mode_) {
+      poll_func = g_main_context_get_poll_func(context_);
+      g_main_context_set_poll_func(context_, ppoll_wrapper);
+    }
+
     more_work_is_plausible = g_main_context_iteration(context_, block);
+    if (poll_func != NULL)
+      g_main_context_set_poll_func(context_, poll_func);
     if (state_->should_quit)
       break;
 
