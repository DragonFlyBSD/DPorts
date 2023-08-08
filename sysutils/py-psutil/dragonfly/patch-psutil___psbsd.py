--- psutil/_psbsd.py.orig	2023-04-17 17:59:11 UTC
+++ psutil/_psbsd.py
@@ -19,6 +19,7 @@ from . import _psutil_posix as cext_posi
 from ._common import FREEBSD
 from ._common import NETBSD
 from ._common import OPENBSD
+from ._common import DRAGONFLY
 from ._common import AccessDenied
 from ._common import NoSuchProcess
 from ._common import ZombieProcess
@@ -51,6 +52,14 @@ if FREEBSD:
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
@@ -166,6 +175,10 @@ if FREEBSD:
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
@@ -268,6 +281,9 @@ if OPENBSD or NETBSD:
     def cpu_count_cores():
         # OpenBSD and NetBSD do not implement this.
         return 1 if cpu_count_logical() == 1 else None
+elif DRAGONFLY:
+    def cpu_count_cores():
+        return cext.cpu_count_cores()
 else:
     def cpu_count_cores():
         """Return the number of CPU cores in the system."""
@@ -298,7 +314,7 @@ else:
 
 def cpu_stats():
     """Return various CPU stats as a named tuple."""
-    if FREEBSD:
+    if FREEBSD or DRAGONFLY:
         # Note: the C ext is returning some metrics we are not exposing:
         # traps.
         ctxsw, intrs, soft_intrs, syscalls, traps = cext.cpu_stats()
