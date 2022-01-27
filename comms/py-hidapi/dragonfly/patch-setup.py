--- setup.py.intermediate	2022-01-27 06:42:07.000000000 +0000
+++ setup.py
@@ -79,8 +79,8 @@ if sys.platform.startswith("win") or sys
         )
     ]
 
-if "bsd" in sys.platform:
-    if "freebsd" in sys.platform:
+if "bsd" in sys.platform or "dragonfly" in sys.platform:
+    if "freebsd" in sys.platform or "dragonfly" in sys.platform:
         libs = ["usb", "hidapi"]
         include_dirs_bsd = ["/usr/local/include/hidapi"]
     else:
