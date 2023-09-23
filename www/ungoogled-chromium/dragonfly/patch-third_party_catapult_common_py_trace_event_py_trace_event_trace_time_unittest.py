diff --git third_party/catapult/common/py_trace_event/py_trace_event/trace_time_unittest.py third_party/catapult/common/py_trace_event/py_trace_event/trace_time_unittest.py
index 509900b27d0..53eb541f7a4 100644
--- third_party/catapult/common/py_trace_event/py_trace_event/trace_time_unittest.py
+++ third_party/catapult/common/py_trace_event/py_trace_event/trace_time_unittest.py
@@ -104,6 +104,9 @@ class TimerTest(unittest.TestCase):
   def testGetClockGetTimeClockNumber_freebsd(self):
     self.assertEquals(trace_time.GetClockGetTimeClockNumber('freebsd'), 4)
 
+  def testGetClockGetTimeClockNumber_dragonfly(self):
+    self.assertEquals(trace_time.GetClockGetTimeClockNumber('dragonfly'), 4)
+
   def testGetClockGetTimeClockNumber_bsd(self):
     self.assertEquals(trace_time.GetClockGetTimeClockNumber('bsd'), 3)
 
