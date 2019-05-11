--- setup.py.intermediate	2019-05-11 07:59:58.000000000 +0000
+++ setup.py
@@ -83,7 +83,7 @@ def get_prefix_path():
     except KeyError:
         pass
 
-    if sys.platform.startswith("freebsd"):
+    if sys.platform.startswith("freebsd") or sys.platform.startswith("dragonfly"):
         return ["/usr/local"]
 
     X11 = ['/usr/X11'] * (not options.osx_frameworks)
@@ -393,7 +393,7 @@ if True:
             dirs.extend(filter(os.path.isdir, [os.path.join(prefix, *s) for s in suffixes]))
 
 if True:
-    if sys.platform.startswith("freebsd"):
+    if sys.platform.startswith("freebsd") or sys.platform.startswith("dragonfly"):
         libs += ["execinfo"]
 
     # optimization currently causes a clang segfault on OS X 10.9 when
