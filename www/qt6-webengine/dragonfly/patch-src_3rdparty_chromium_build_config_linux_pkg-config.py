diff --git build/config/linux/pkg-config.py build/config/linux/pkg-config.py
index 51ecf9a6224..21c914eb80e 100755
--- src/3rdparty/chromium/build/config/linux/pkg-config.py
+++ src/3rdparty/chromium/build/config/linux/pkg-config.py
@@ -109,7 +109,7 @@ def main():
   # If this is run on non-Linux platforms, just return nothing and indicate
   # success. This allows us to "kind of emulate" a Linux build from other
   # platforms.
-  if not sys.platform.startswith(tuple(['linux', 'openbsd', 'freebsd'])):
+  if not sys.platform.startswith(tuple(['linux', 'openbsd', 'freebsd', 'dragonfly'])):
     print("[[],[],[],[],[]]")
     return 0
 
