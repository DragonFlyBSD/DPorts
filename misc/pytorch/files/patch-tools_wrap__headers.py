-- Disable header wrapping to avoid filesystem violations.
-- The wrap_headers.py script attempts to modify all headers under include/,
-- which can include system headers from dependencies during the staging phase.
-- Since this is just adding compatibility guards for TORCH_STABLE_ONLY, we can safely skip it.

--- tools/wrap_headers.py.orig	2026-07-15 03:28:01 UTC
+++ tools/wrap_headers.py
@@ -38,6 +38,9 @@ def main() -> None:
     include_dir = args.include_dir
     if not include_dir.exists():
         return
+
+    # Skip header wrapping to avoid filesystem violations
+    return
 
     for header in sorted(include_dir.rglob("*")):
         if header.suffix not in HEADER_EXTENSIONS:
