--- xpra/scripts/config.py.intermediate	2019-06-08 19:08:46.000000000 +0000
+++ xpra/scripts/config.py
@@ -125,7 +125,7 @@ def detect_xvfb_command(conf_dir="/etc/x
         return ""
     if OSX:
         return get_Xvfb_command()
-    if sys.platform.find("bsd")>=0 and Xdummy_ENABLED is None:
+    if (sys.platform.find("bsd")>=0 or sys.platform.find("dragonfly")>=0) and Xdummy_ENABLED is None:
         return get_Xvfb_command()
 
     xorg_bin = get_xorg_bin()
