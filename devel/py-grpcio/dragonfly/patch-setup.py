--- setup.py.orig	2020-08-08 19:18:35.281426000 +0200
+++ setup.py	2020-08-08 19:18:52.191508000 +0200
@@ -49,6 +49,8 @@
 )
 if 'darwin' in sys.platform:
     CARES_INCLUDE += (os.path.join('third_party', 'cares', 'config_darwin'),)
+if 'dragonfly' in sys.platform:
+    CARES_INCLUDE += (os.path.join('third_party', 'cares', 'config_freebsd'),)
 if 'freebsd' in sys.platform:
     CARES_INCLUDE += (os.path.join('third_party', 'cares', 'config_freebsd'),)
 if 'linux' in sys.platform:
