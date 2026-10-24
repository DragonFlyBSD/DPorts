--- src/3rdparty/chromium/build/config/linux/pkg-config.py.intermediate	2026-09-17 07:06:56 UTC
+++ src/3rdparty/chromium/build/config/linux/pkg-config.py
@@ -113,7 +113,7 @@ def main():
   # If this is run on non-Linux platforms, just return nothing and indicate
   # success. This allows us to "kind of emulate" a Linux build from other
   # platforms.
-  if not sys.platform.startswith(tuple(['linux', 'darwin', 'freebsd', 'openbsd'])):
+  if not sys.platform.startswith(tuple(['linux', 'darwin', 'freebsd', 'openbsd', 'dragonfly'])):
     print("[[],[],[],[],[]]")
     return 0
 
