--- psutil/_psbsd.py.orig	2024-06-18 21:00:36 UTC
+++ psutil/_psbsd.py
@@ -19,6 +19,7 @@ from . import _psutil_posix as cext_posi
 from ._common import FREEBSD
 from ._common import NETBSD
 from ._common import OPENBSD
+from ._common import DRAGONFLY
 from ._common import AccessDenied
 from ._common import NoSuchProcess
 from ._common import ZombieProcess
@@ -52,6 +53,14 @@ if FREEBSD:
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
@@ -168,6 +177,10 @@ if FREEBSD:
                                      'read_bytes', 'write_bytes',
                                      'read_time', 'write_time',
                                      'busy_time'])
+elif DRAGONFLY:
+    sdiskio = namedtuple('sdiskio', ['read_count', 'write_count',
+                                     'read_bytes', 'write_bytes',
+                                     'busy_time'])
 else:
     sdiskio = namedtuple('sdiskio', ['read_count', 'write_count',
                                      'read_bytes', 'write_bytes'])
@@ -287,6 +300,10 @@ if OPENBSD or NETBSD:
         # OpenBSD and NetBSD do not implement this.
         return 1 if cpu_count_logical() == 1 else None
 
+elif DRAGONFLY:
+    def cpu_count_cores():
+        return cext.cpu_count_cores()
+
 else:
 
     def cpu_count_cores():
@@ -318,7 +335,7 @@ else:
 
 def cpu_stats():
     """Return various CPU stats as a named tuple."""
-    if FREEBSD:
+    if FREEBSD or DRAGONFLY:
         # Note: the C ext is returning some metrics we are not exposing:
         # traps.
         ctxsw, intrs, soft_intrs, syscalls, _traps = cext.cpu_stats()
