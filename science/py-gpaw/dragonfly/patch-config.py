--- config.py.orig	2019-05-08 06:31:09 UTC
+++ config.py
@@ -157,7 +157,7 @@ def get_system_config(define_macros, und
                 libraries += ['mkl_intel_lp64', 'mkl_sequential', 'mkl_core',
                               'irc']
             elif openblas:  # prefer openblas
-                libraries += ['openblas', 'lapack']
+                libraries += ['openblas']
                 library_dirs += [libdir]
             else:
                 if atlas:  # then atlas
