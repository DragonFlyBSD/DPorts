--- third_party/node/node.py.orig	2026-09-09 12:00:00 UTC
+++ third_party/node/node.py
@@ -22,12 +22,16 @@
     'Linux': ('linux', 'node-linux-x64', 'bin', 'node'),
     'OpenBSD': ('openbsd', 'node-openbsd', 'bin', 'node'),
     'FreeBSD': ('freebsd', 'node-freebsd', 'bin', 'node'),
+    'DragonFly': ('dragonfly', 'node-dragonfly', 'bin', 'node'),
     'Windows': ('win', 'node.exe'),
   }[platform.system()])
 
 
 def RunNodeRaw(cmd_parts, stdout=None):
-  cmd = [GetBinaryPath()] + cmd_parts
+  # Chromium's build drives a WASM Rollup, and V8's TurboFan WASM optimizer
+  # hits a platform-specific miscompile in the BitcastElider -> codegen path
+  # on DragonFly, so force the Liftoff baseline compiler.
+  cmd = [GetBinaryPath()] + ['--liftoff-only'] + cmd_parts
   process = subprocess.Popen(
       cmd, cwd=os.getcwd(), stdout=subprocess.PIPE, stderr=subprocess.PIPE,
       universal_newlines=True, encoding='utf-8')
