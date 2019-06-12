--- xpra/client/gtk_base/sessions_gui.py.orig	2019-03-19 15:05:10 UTC
+++ xpra/client/gtk_base/sessions_gui.py
@@ -423,6 +423,7 @@ class SessionsGUI(gtk.Window):
             "darwin"    : "osx",
             "linux"     : "linux",
             "freebsd"   : "freebsd",
+            "dragonfly" : "dragonfly",
             }.items():
             if platform.startswith(p):
                 return i
