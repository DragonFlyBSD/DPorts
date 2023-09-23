diff --git third_party/grpc/src/setup.py third_party/grpc/src/setup.py
index 6501b43d612..e07b13bd33d 100644
--- third_party/grpc/src/setup.py
+++ third_party/grpc/src/setup.py
@@ -62,7 +62,7 @@ CARES_INCLUDE = (
 )
 if 'darwin' in sys.platform:
     CARES_INCLUDE += (os.path.join('third_party', 'cares', 'config_darwin'),)
-if 'freebsd' in sys.platform:
+if 'freebsd' in sys.platform or 'dragonfly' in sys.platform:
     CARES_INCLUDE += (os.path.join('third_party', 'cares', 'config_freebsd'),)
 if 'linux' in sys.platform:
     CARES_INCLUDE += (os.path.join('third_party', 'cares', 'config_linux'),)
