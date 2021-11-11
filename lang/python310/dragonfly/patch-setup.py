--- setup.py.orig	2021-11-10 11:44:53.320127000 +0100
+++ setup.py	2021-11-10 11:45:14.149661000 +0100
@@ -1646,7 +1646,7 @@
             self.missing.extend(['resource', 'termios'])
 
         # Platform-specific libraries
-        if HOST_PLATFORM.startswith(('linux', 'freebsd', 'gnukfreebsd')):
+        if HOST_PLATFORM.startswith(('linux', 'dragonfly', 'freebsd', 'gnukfreebsd')):
             self.add(Extension('ossaudiodev', ['ossaudiodev.c']))
         elif not AIX:
             self.missing.append('ossaudiodev')
