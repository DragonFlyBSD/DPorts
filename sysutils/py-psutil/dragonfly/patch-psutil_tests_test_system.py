diff --git psutil/tests/test_system.py psutil/tests/test_system.py
index d6b7a21a..75532f87 100755
--- psutil/tests/test_system.py
+++ psutil/tests/test_system.py
@@ -22,6 +22,7 @@ import psutil
 from psutil import AIX
 from psutil import BSD
 from psutil import FREEBSD
+from psutil import DRAGONFLY
 from psutil import LINUX
 from psutil import MACOS
 from psutil import NETBSD
@@ -650,7 +651,7 @@ class TestDiskAPIs(PsutilTestCase):
             self.assertEqual(nt[1], nt.write_count)
             self.assertEqual(nt[2], nt.read_bytes)
             self.assertEqual(nt[3], nt.write_bytes)
-            if not (OPENBSD or NETBSD):
+            if not (OPENBSD or NETBSD or DRAGONFLY):
                 self.assertEqual(nt[4], nt.read_time)
                 self.assertEqual(nt[5], nt.write_time)
                 if LINUX:
