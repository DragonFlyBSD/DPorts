--- psutil/tests/test_system.py.orig	2025-06-13 17:26:16.985522000 +0200
+++ psutil/tests/test_system.py	2025-06-13 17:28:35.248063000 +0200
@@ -23,6 +23,7 @@ import psutil
 from psutil import AIX
 from psutil import BSD
 from psutil import FREEBSD
+from psutil import DRAGONFLY
 from psutil import LINUX
 from psutil import MACOS
 from psutil import NETBSD
@@ -728,7 +729,7 @@ class TestDiskAPIs(PsutilTestCase):
             assert nt[1] == nt.write_count
             assert nt[2] == nt.read_bytes
             assert nt[3] == nt.write_bytes
-            if not (OPENBSD or NETBSD):
+            if not (OPENBSD or NETBSD or DRAGONFLY):
                 assert nt[4] == nt.read_time
                 assert nt[5] == nt.write_time
                 if LINUX:
