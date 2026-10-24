-- Make Cython build automatic if it is present in the environment
-- This allows the ports build to re-generate C++ sources using modern Cython
--- setup.py.orig	2026-07-07 02:28:03 UTC
+++ setup.py
@@ -62,10 +62,17 @@ if '--debug' in sys.argv:
     extra_args.extend(['-O0', '-g'])
     sys.argv.remove('--debug')
 
-if '--cython' in sys.argv:
+try:
     from Cython.Build import cythonize
+    has_cython = True
+except ImportError:
+    has_cython = False
+
+if '--cython' in sys.argv:
+    has_cython = True
     sys.argv.remove('--cython')
 
+if has_cython:
     def myCythonize(macros, *args, **kwargs):
         result = cythonize(*args, **kwargs)
         for r in result:
