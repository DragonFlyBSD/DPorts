--- xpra/server/shadow/root_window_model.py.orig	2016-12-06 12:56:27.000000000 +0200
+++ xpra/server/shadow/root_window_model.py
@@ -67,6 +67,7 @@ class RootWindowModel(object):
         for k,v in {"linux"     : "linux",
                     "darwin"    : "osx",
                     "win"       : "win32",
+                    "dragonfly" : "dragonfly",
                     "freebsd"   : "freebsd"}.items():
             if sys.platform.startswith(k):
                 return v
