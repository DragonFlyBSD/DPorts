diff --git third_party/catapult/common/py_trace_event/py_trace_event/trace_time_unittest.py third_party/catapult/common/py_trace_event/py_trace_event/trace_time_unittest.py
index 6e2db38d933b..b4787f51a69d 100644
--- third_party/catapult/common/py_trace_event/py_trace_event/trace_time_unittest.py
+++ third_party/catapult/common/py_trace_event/py_trace_event/trace_time_unittest.py
@@ -105,6 +105,9 @@ class TimerTest(unittest.TestCase):
   def testGetClockGetTimeClockNumber_freebsd(self):
     self.assertEquals(trace_time.GetClockGetTimeClockNumber('freebsd'), 4)
 
+  def testGetClockGetTimeClockNumber_dragonfly(self):
+    self.assertEquals(trace_time.GetClockGetTimeClockNumber('dragonfly'), 4)
+
   def testGetClockGetTimeClockNumber_bsd(self):
     self.assertEquals(trace_time.GetClockGetTimeClockNumber('bsd'), 3)
 
