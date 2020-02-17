--- setup.py.intermediate	2020-02-17 11:05:07 UTC
+++ setup.py
@@ -81,8 +81,8 @@ if sys.platform.startswith('win') or sys
         )
     ]
 
-if 'bsd' in sys.platform:
-    if 'freebsd' in sys.platform:
+if 'bsd' in sys.platform or 'dragonfly' in sys.platform:
+    if 'freebsd' in sys.platform or 'dragonfly' in sys.platform:
         libs = ['usb', 'hidapi']
         include_dirs_bsd = ['/usr/local/include/hidapi']
     else:
