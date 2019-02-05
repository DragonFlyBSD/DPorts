--- setup.py.orig	2019-02-05 10:01:40 UTC
+++ setup.py
@@ -43,6 +43,8 @@ CARES_INCLUDE = (
     os.path.join('third_party', 'cares', 'cares'),)
 if 'darwin' in sys.platform:
   CARES_INCLUDE += (os.path.join('third_party', 'cares', 'config_darwin'),)
+if 'dragonfly' in sys.platform:
+  CARES_INCLUDE += (os.path.join('third_party', 'cares', 'config_freebsd'),)
 if 'freebsd' in sys.platform:
   CARES_INCLUDE += (os.path.join('third_party', 'cares', 'config_freebsd'),)
 if 'linux' in sys.platform:
