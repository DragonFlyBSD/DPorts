diff --git third_party/blink/renderer/bindings/scripts/bind_gen/style_format.py third_party/blink/renderer/bindings/scripts/bind_gen/style_format.py
index cdbf6cb89a54..177afe675a09 100644
--- third_party/blink/renderer/bindings/scripts/bind_gen/style_format.py
+++ third_party/blink/renderer/bindings/scripts/bind_gen/style_format.py
@@ -30,7 +30,7 @@ def init(root_src_dir, enable_style_format=True):
 
     # Determine //buildtools/<platform>/ directory
     new_path_platform_suffix = ""
-    if sys.platform.startswith(("linux","openbsd","freebsd")):
+    if sys.platform.startswith(("linux","openbsd","freebsd","dragonfly")):
         platform = "linux64"
         exe_suffix = ""
     elif sys.platform.startswith("darwin"):
