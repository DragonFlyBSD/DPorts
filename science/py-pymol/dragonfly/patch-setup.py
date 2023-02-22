--- setup.py.orig	2023-02-20 23:07:12 UTC
+++ setup.py
@@ -88,7 +88,7 @@ def get_prefix_path():
     except KeyError:
         pass
 
-    if sys.platform.startswith("freebsd"):
+    if sys.platform.startswith("freebsd") or sys.platform.startswith("dragonfly"):
         return ["/usr/local"]
 
     X11 = ['/usr/X11'] * (not options.osx_frameworks)
