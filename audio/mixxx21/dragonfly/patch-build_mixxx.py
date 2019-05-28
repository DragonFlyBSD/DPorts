--- build/mixxx.py.intermediate	2019-05-26 12:22:51.000000000 +0000
+++ build/mixxx.py
@@ -262,7 +262,7 @@ class MixxxBuild(object):
         if os.name == 'nt' or sys.platform == 'win32':
             return 'windows'
         # Should cover {Net,Open,Free,DragonFly}BSD, but only tested on OpenBSD
-        if 'bsd' in sys.platform:
+        if 'bsd' in sys.platform or 'dragonfly' in sys.platform:
             return 'bsd'
         if sys.platform.startswith('linux'):
             return 'linux'
