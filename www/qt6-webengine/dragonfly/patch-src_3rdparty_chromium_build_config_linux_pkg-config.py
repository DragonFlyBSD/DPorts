--- src/3rdparty/chromium/build/config/linux/pkg-config.py.orig	Thu Nov  6 19:09:26 2025
+++ src/3rdparty/chromium/build/config/linux/pkg-config.py	Thu Nov
@@ -113,7 +113,7 @@ def main():
   # If this is run on non-Linux platforms, just return nothing and indicate
   # success. This allows us to "kind of emulate" a Linux build from other
   # platforms.
-  if not sys.platform.startswith(tuple(['linux', 'darwin', 'openbsd', 'freebsd'])):
+  if not sys.platform.startswith(tuple(['linux', 'darwin', 'openbsd', 'freebsd', 'dragonfly'])):
     print("[[],[],[],[],[]]")
     return 0
 
