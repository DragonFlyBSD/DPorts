diff --git third_party/grpc/src/src/c-ares/gen_build_yaml.py third_party/grpc/src/src/c-ares/gen_build_yaml.py
index 607704ca278..e268a9f02ef 100755
--- third_party/grpc/src/src/c-ares/gen_build_yaml.py
+++ third_party/grpc/src/src/c-ares/gen_build_yaml.py
@@ -32,7 +32,7 @@ try:
     def config_platform(x):
         if 'darwin' in sys.platform:
             return 'src/cares/cares/config_darwin/ares_config.h'
-        if 'freebsd' in sys.platform:
+        if 'freebsd' in sys.platform or 'dragonfly' in sys.platform:
             return 'src/cares/cares/config_freebsd/ares_config.h'
         if 'linux' in sys.platform:
             return 'src/cares/cares/config_linux/ares_config.h'
