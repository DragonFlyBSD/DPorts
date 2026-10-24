--- psutil/_ntuples.py.orig	2025-11-25 15:42:57 UTC
+++ psutil/_ntuples.py
@@ -6,6 +6,7 @@ from collections import namedtuple as nt
 
 from ._common import AIX
 from ._common import BSD
+from ._common import DRAGONFLY
 from ._common import FREEBSD
 from ._common import LINUX
 from ._common import MACOS
@@ -360,7 +361,7 @@ elif BSD:
     )
 
     # psutil.disk_io_counters()
-    if FREEBSD:
+    if FREEBSD or DRAGONFLY:
         sdiskio = nt(
             "sdiskio",
             (
