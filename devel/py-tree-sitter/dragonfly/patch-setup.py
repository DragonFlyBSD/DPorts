--- setup.py.orig	2026-10-01 00:00:00 UTC
+++ setup.py
@@ -60,7 +60,6 @@ setup(
                 "tree_sitter/core/lib/src",
             ],
             define_macros=[
-                ("_POSIX_C_SOURCE", "200112L"),
                 ("_DEFAULT_SOURCE", None),
                 ("PY_SSIZE_T_CLEAN", None),
                 ("TREE_SITTER_HIDE_SYMBOLS", None),
