--- setup.py.orig
+++ setup.py
@@ -20,7 +20,8 @@
 
 SYSTEM_IS_UNIX = (sys.platform.startswith("linux") or
                   sys.platform.startswith("darwin") or
-                  'bsd' in sys.platform)
+                  'bsd' in sys.platform or
+                  sys.platform.startswith("dragonfly"))
 SYSTEM_IS_WINDOWS = sys.platform.startswith("win")
 
 # Since pip builds in a temp directory by default, setting a fixed file in
