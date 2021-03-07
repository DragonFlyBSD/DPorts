--- readchar/readchar.py.intermediate	2021-03-07 15:49:46.000000000 +0000
+++ readchar/readchar.py
@@ -9,7 +9,7 @@ if sys.platform.startswith('linux'):
     from .readchar_linux import readchar
 elif sys.platform == 'darwin':
     from .readchar_linux import readchar
-elif sys.platform.startswith('freebsd'):
+elif sys.platform.startswith('freebsd') or sys.platform.startswith('dragonfly'):
     from .readchar_linux import readchar
 elif sys.platform in ('win32', 'cygwin'):
     import msvcrt
