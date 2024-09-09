diff --git base/message_loop/message_pump.h base/message_loop/message_pump.h
index c2628cda8ad..b4e397ec76c 100644
--- src/3rdparty/chromium/base/message_loop/message_pump.h
+++ src/3rdparty/chromium/base/message_loop/message_pump.h
@@ -232,6 +232,13 @@ class BASE_EXPORT MessagePump {
 
   // Sets the timer slack to the specified value.
   virtual void SetTimerSlack(TimerSlack timer_slack);
+
+#if defined(OS_DRAGONFLY)
+  bool high_res_mode_ = false;
+  void ActivateHighResolutionTimer(bool high_res) {
+    high_res_mode_ = high_res;
+  }
+#endif
 };
 
 }  // namespace base
