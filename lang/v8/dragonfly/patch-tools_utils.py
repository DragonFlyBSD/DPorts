--- tools/utils.py.orig	2012-12-09 04:50:16.000000000 +0100
+++ tools/utils.py	2013-01-21 11:46:46.102784000 +0100
@@ -55,6 +55,8 @@
     # On Windows Vista platform.system() can return 'Microsoft' with some
     # versions of Python, see http://bugs.python.org/issue1082
     return 'win32'
+  elif id == 'DragonFly':
+    return 'freebsd'
   elif id == 'FreeBSD':
     return 'freebsd'
   elif id == 'OpenBSD':
