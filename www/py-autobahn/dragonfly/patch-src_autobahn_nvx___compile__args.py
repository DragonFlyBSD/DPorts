--- src/autobahn/nvx/_compile_args.py.orig	2026-07-01 00:00:00 UTC
+++ src/autobahn/nvx/_compile_args.py
@@ -294,6 +294,9 @@ def _get_safe_march_flag(machine):
         # x86-64: Use microarchitecture level 2 (2009+ CPUs)
         # Includes: SSE4.2, POPCNT, SSSE3, SSE4.1
         # Compatible with: Intel Nehalem+, AMD Bulldozer+
+        if sys.platform.startswith("dragonfly"):
+            # Base gcc 8 predates the x86-64-v2 name; nehalem is that ISA.
+            return "-march=nehalem"
         return "-march=x86-64-v2"
 
     elif machine in ("aarch64", "arm64"):
