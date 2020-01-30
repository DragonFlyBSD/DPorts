--- pydoop/utils/jvm.py.orig	2015-09-04 15:15:51 UTC
+++ pydoop/utils/jvm.py
@@ -48,6 +48,8 @@ def get_include_dirs():
         dirs += [os.path.join(java_home, 'include', 'win32')]
     elif sys.platform == 'darwin':
         dirs += [os.path.join(java_home, 'include', 'darwin')]
+    elif sys.platform.startswith('dragonfly'):
+        dirs += [os.path.join(java_home, 'include', 'dragonfly')]
     elif sys.platform.startswith('freebsd'):
         dirs += [os.path.join(java_home, 'include', 'freebsd')]
     else:  # linux
