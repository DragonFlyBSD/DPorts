-- Regenerate the Cython extension source at build time rather than
-- using the bundled generated C++ file, which was produced by Cython 0.29.32
-- and is incompatible with Python 3.12.

--- setup.py.orig	2023-05-04 11:30:36 UTC
+++ setup.py
@@ -15,15 +15,16 @@ macros = []
     exec(version_file.read())
 
 macros = []
-extra_args = ['-std=c++14']
+extra_args = ['-std=c++17']
 sources = []
 
-CYTHONIZE = False
-if '--cython' in sys.argv:
+CYTHONIZE = True
+try:
     from Cython.Build import cythonize
-    sys.argv.remove('--cython')
-    CYTHONIZE = True
+except ImportError:
+    CYTHONIZE = False
 
+if CYTHONIZE:
     def myCythonize(macros, *args, **kwargs):
         result = cythonize(*args, **kwargs)
         for r in result:
