--- src/3rdparty/chromium/build/config/linux/pkg-config.py.orig	2024-06-09 12:28:43 UTC
+++ src/3rdparty/chromium/build/config/linux/pkg-config.py
@@ -108,7 +108,7 @@ def main():
   # If this is run on non-Linux platforms, just return nothing and indicate
   # success. This allows us to "kind of emulate" a Linux build from other
   # platforms.
-  if not sys.platform.startswith(tuple(['linux', 'openbsd', 'freebsd', 'darwin'])):
+  if not sys.platform.startswith(tuple(['linux', 'openbsd', 'freebsd', 'darwin', 'dragonfly'])):
     print("[[],[],[],[],[]]")
     return 0
 
