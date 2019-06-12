--- cmake/FindPyQt5.py.intermediate	2019-05-28 13:46:09.000000000 +0000
+++ cmake/FindPyQt5.py
@@ -40,7 +40,7 @@ except ImportError:
     import sys
     cfg = sipconfig.Configuration()
     sip_dir = cfg.default_sip_dir
-    if sys.platform.startswith('freebsd'):
+    if sys.platform.startswith('freebsd') or sys.platform.startswith('dragonfly'):
         py_version = str(sys.version_info.major) + str(sys.version_info.minor)
         sip_dir = sip_dir.replace(py_version, '')
     for p in (os.path.join(sip_dir, "PyQt5"),
