diff --git third_party/catapult/common/py_trace_event/py_trace_event/trace_time.py third_party/catapult/common/py_trace_event/py_trace_event/trace_time.py
index 9455125d209..0dced7919ee 100644
--- third_party/catapult/common/py_trace_event/py_trace_event/trace_time.py
+++ third_party/catapult/common/py_trace_event/py_trace_event/trace_time.py
@@ -27,6 +27,7 @@ _PLATFORMS = {
     'windows': 'win32',
     'cygwin': 'cygwin',
     'freebsd': 'freebsd',
+    'dragonfly': 'dragonfly',
     'sunos': 'sunos5',
     'bsd': 'bsd'
 }
@@ -34,6 +35,7 @@ _PLATFORMS = {
 _CLOCK_MONOTONIC = {
     'linux': 1,
     'freebsd': 4,
+    'dragonfly': 4,
     'bsd': 3,
     'sunos5': 4
 }
@@ -207,6 +209,7 @@ def InitializeNowFunction(plat):
 
   elif (plat.startswith(_PLATFORMS['linux'])
         or plat.startswith(_PLATFORMS['freebsd'])
+        or plat.startswith(_PLATFORMS['dragonfly'])
         or plat.startswith(_PLATFORMS['bsd'])
         or plat.startswith(_PLATFORMS['sunos'])):
     InitializeLinuxNowFunction(plat)
