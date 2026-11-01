diff --git third_party/devtools-frontend/src/scripts/build/build_inspector_overlay.py third_party/devtools-frontend/src/scripts/build/build_inspector_overlay.py
index ea821704259e..1fbf0b0c061f 100644
--- third_party/devtools-frontend/src/scripts/build/build_inspector_overlay.py
+++ third_party/devtools-frontend/src/scripts/build/build_inspector_overlay.py
@@ -49,11 +49,13 @@ def check_size(filename, data, max_size):
     ) < max_size, "generated file %s should not exceed max_size of %d bytes. Current size: %d" % (
         filename, max_size, len(data))
 
-
+# XXX: disable wasm optimizations in the rollup again, some problem with node22
+# is present in dragonfly
 def rollup(input_path, output_path, filename, max_size, rollup_plugin):
     target = join(input_path, filename)
     rollup_process = subprocess.Popen(
         [devtools_paths.node_path(),
+         '--liftoff-only',
          devtools_paths.rollup_path()] +
         ['--format', 'iife', '-n', 'InspectorOverlay'] + ['--input', target] +
         ['--plugin', rollup_plugin, '--plugin', 'terser'],
