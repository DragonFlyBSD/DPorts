diff --git third_party/blink/renderer/bindings/scripts/bind_gen/style_format.py third_party/blink/renderer/bindings/scripts/bind_gen/style_format.py
index ad6700bbe91..21eb8981c8a 100644
--- third_party/blink/renderer/bindings/scripts/bind_gen/style_format.py
+++ third_party/blink/renderer/bindings/scripts/bind_gen/style_format.py
@@ -28,7 +28,7 @@ def init(root_src_dir, enable_style_format=True):
     root_src_dir = os.path.abspath(root_src_dir)
 
     # Determine //buildtools/<platform>/ directory
-    if sys.platform.startswith(("linux","openbsd","freebsd")):
+    if sys.platform.startswith(("linux","openbsd","freebsd","dragonfly")):
         platform = "linux64"
         exe_suffix = ""
     elif sys.platform.startswith("darwin"):
