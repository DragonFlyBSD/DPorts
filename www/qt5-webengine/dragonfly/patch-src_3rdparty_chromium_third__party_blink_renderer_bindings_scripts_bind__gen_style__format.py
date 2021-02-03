--- src/3rdparty/chromium/third_party/blink/renderer/bindings/scripts/bind_gen/style_format.py.intermediate	2021-02-02 16:48:13 UTC
+++ src/3rdparty/chromium/third_party/blink/renderer/bindings/scripts/bind_gen/style_format.py
@@ -32,6 +32,9 @@ def init(root_src_dir):
     elif sys.platform.startswith("freebsd"):
         platform = "freebsd"
         exe_suffix = ""
+    elif sys.platform.startswith("dragonfly"):
+        platform = "dragonfly"
+        exe_suffix = ""
     else:
         assert False, "Unknown platform: {}".format(sys.platform)
     buildtools_platform_dir = os.path.join(root_src_dir, "buildtools",
