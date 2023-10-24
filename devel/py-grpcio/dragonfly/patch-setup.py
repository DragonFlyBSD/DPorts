--- setup.py.orig	2023-09-28 23:27:01 UTC
+++ setup.py
@@ -61,6 +61,8 @@ CARES_INCLUDE = (
 )
 if "darwin" in sys.platform:
     CARES_INCLUDE += (os.path.join("third_party", "cares", "config_darwin"),)
+if 'dragonfly' in sys.platform:
+    CARES_INCLUDE += (os.path.join('third_party', 'cares', 'config_freebsd'),)
 if "freebsd" in sys.platform:
     CARES_INCLUDE += (os.path.join("third_party", "cares", "config_freebsd"),)
 if "linux" in sys.platform:
