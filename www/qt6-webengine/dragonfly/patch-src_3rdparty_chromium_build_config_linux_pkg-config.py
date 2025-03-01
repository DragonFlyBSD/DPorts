--- src/3rdparty/chromium/build/config/linux/pkg-config.py.orig	Fri Feb 28 16:33:22 2025
+++ src/3rdparty/chromium/build/config/linux/pkg-config.py	Fri Feb
@@ -113,7 +113,7 @@ def main():
   # If this is run on non-Linux platforms, just return nothing and indicate
   # success. This allows us to "kind of emulate" a Linux build from other
   # platforms.
-  if not sys.platform.startswith(tuple(['linux', 'darwin', 'freebsd', 'openbsd'])):
+  if not sys.platform.startswith(tuple(['linux', 'darwin', 'freebsd', 'openbsd', 'dragonfly'])):
     print("[[],[],[],[],[]]")
     return 0
 
