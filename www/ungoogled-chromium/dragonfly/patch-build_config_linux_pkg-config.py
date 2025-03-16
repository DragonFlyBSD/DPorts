diff --git build/config/linux/pkg-config.py build/config/linux/pkg-config.py
index 3caf00630d47..466f6c0849ae 100755
--- build/config/linux/pkg-config.py
+++ build/config/linux/pkg-config.py
@@ -108,7 +108,7 @@ def main():
   # If this is run on non-Linux platforms, just return nothing and indicate
   # success. This allows us to "kind of emulate" a Linux build from other
   # platforms.
-  if not sys.platform.startswith(tuple(['linux', 'openbsd', 'freebsd'])):
+  if not sys.platform.startswith(tuple(['linux', 'openbsd', 'freebsd', 'dragonfly'])):
     print("[[],[],[],[],[]]")
     return 0
 
