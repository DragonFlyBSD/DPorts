--- psutil/_psbsd.py.intermediate	2026-09-16 04:13:38 UTC
+++ psutil/_psbsd.py
@@ -19,6 +19,7 @@ from . import _psutil_bsd as cext
 from ._common import FREEBSD
 from ._common import NETBSD
 from ._common import OPENBSD
+from ._common import DRAGONFLY
 from ._common import AccessDenied
 from ._common import NoSuchProcess
 from ._common import ZombieProcess
@@ -47,6 +48,14 @@ if FREEBSD:
         cext.SWAIT: _common.STATUS_WAITING,
         cext.SLOCK: _common.STATUS_LOCKED,
     }
+elif DRAGONFLY:
+    PROC_STATUSES = {
+        cext.SIDL: _common.STATUS_IDLE,
+        cext.SACTIVE: _common.STATUS_RUNNING,
+        cext.SSTOP: _common.STATUS_STOPPED,
+        cext.SZOMB: _common.STATUS_ZOMBIE,
+        cext.SCORE: _common.STATUS_CORE,
+    }
 elif OPENBSD:
     PROC_STATUSES = {
         cext.SIDL: _common.STATUS_IDLE,
@@ -256,7 +265,7 @@ else:
 
 def cpu_stats():
     """Return various CPU stats as a named tuple."""
-    if FREEBSD:
+    if FREEBSD or DRAGONFLY:
         # Note: the C ext is returning some metrics we are not exposing:
         # traps.
         ctxsw, intrs, soft_intrs, syscalls, _traps = cext.cpu_stats()
@@ -286,7 +295,7 @@ def cpu_stats():
     return ntp.scpustats(ctxsw, intrs, soft_intrs, syscalls)
 
 
-if FREEBSD:
+if FREEBSD or DRAGONFLY:
 
     def cpu_freq():
         """Return frequency metrics for CPUs. As of Dec 2018 only
@@ -615,7 +624,7 @@ class Process:
 
     @wrap_exceptions
     def exe(self):
-        if FREEBSD:
+        if FREEBSD or DRAGONFLY:
             if self.pid == 0:
                 return ''  # else NSP
             return cext.proc_exe(self.pid)
@@ -852,7 +861,7 @@ class Process:
 
     # --- FreeBSD only APIs
 
-    if FREEBSD:
+    if FREEBSD or DRAGONFLY:
 
         @wrap_exceptions
         def cpu_affinity_get(self):
