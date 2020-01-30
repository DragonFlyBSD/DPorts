--- setup.py.intermediate	2020-01-27 10:08:25.000000000 +0000
+++ setup.py
@@ -372,6 +372,10 @@ def main():
                 cfg['ARCH'] = 'x86_64'
         else:
             cfg['IFDEF'] = 'DARWIN'
+    elif plt.startswith('dragonfly'):
+        common_libs = []
+        cfg['IFDEF']='FREEBSD'
+        cfg['ARCH'] = 'x86_64'
     elif plt.startswith('freebsd'):
         common_libs = []
         cfg['IFDEF'] = 'FREEBSD'
