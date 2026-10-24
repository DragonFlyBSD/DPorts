--- src/3rdparty/chromium/third_party/blink/renderer/bindings/scripts/bind_gen/style_format.py.intermediate	2026-09-17 07:06:57 UTC
+++ src/3rdparty/chromium/third_party/blink/renderer/bindings/scripts/bind_gen/style_format.py
@@ -30,7 +30,7 @@ def init(root_src_dir, enable_style_format=True):
 
     # Determine //buildtools/<platform>/ directory
     new_path_platform_suffix = ""
-    if sys.platform.startswith(("linux","openbsd","freebsd")):
+    if sys.platform.startswith(("linux","openbsd","freebsd","dragonfly")):
         platform = "linux64"
         exe_suffix = ""
     elif sys.platform.startswith("darwin"):
