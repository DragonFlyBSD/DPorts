--- setup.py.orig	2016-11-22 17:26:38 UTC
+++ setup.py
@@ -356,6 +356,10 @@ def main():
             cfg['ARCH'] = 'x86_64'
       else:
          cfg['IFDEF'] = 'DARWIN'
+   elif plt.startswith('dragonfly'):
+      common_libs = ['z']
+      cfg['IFDEF']='FREEBSD'
+      cfg['ARCH'] = 'x86_64'
    elif plt.startswith('freebsd'):
       common_libs = ['z']
       cfg['IFDEF']='FREEBSD'
