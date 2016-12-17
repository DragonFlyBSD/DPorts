--- setup.py.intermediate	2016-12-17 15:37:30.000000000 +0200
+++ setup.py
@@ -178,7 +178,7 @@ class build_doc(_build):
     def run(self):
         # be sure to compile man page
         self.mkpath(self.build_dir)
-        if sys.platform.startswith('freebsd'):
+        if sys.platform.startswith('freebsd') or sys.platform.startswith('dragonfly'):
             make_cmd = 'gmake'
         else:
             make_cmd = 'make'
