--- setup.py.orig	2013-01-28 12:35:55.000000000 +0000
+++ setup.py
@@ -345,6 +345,13 @@ def main():
             cfg['ARCH'] = 'x86_64'
       else:
          cfg['IFDEF'] = 'LINUX'
+   elif plt.startswith('dragonfly'):
+      common_libs = []
+      cfg['IFDEF']='FREEBSD'
+      if machine == 'x86_64':
+         cfg['ARCH'] = machine
+      else:
+         cfg['ARCH'] = 'x86'
    elif plt.startswith('freebsd'):
       common_libs = []
       cfg['IFDEF']='FREEBSD'
