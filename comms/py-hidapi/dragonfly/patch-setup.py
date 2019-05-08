--- setup.py.intermediate	2019-05-07 13:49:43 UTC
+++ setup.py
@@ -79,7 +79,7 @@ if sys.platform.startswith('win') or sys
         )
     ]
 
-if 'bsd' in sys.platform:
+if 'bsd' in sys.platform or 'dragonfly' in sys.platform:
     libs = ['usb-1.0']
     if system_hidapi == True:
         libs.append('hidapi-libusb')
