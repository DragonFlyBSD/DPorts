--- setup.py.orig	2014-05-23 21:07:21.000000000 +0000
+++ setup.py
@@ -164,6 +164,9 @@ else:
     elif sys.platform.startswith('freebsd'):
         COMPILER_SETTINGS['include_dirs'] += ['/usr/local/include'] # homebrew
         COMPILER_SETTINGS['library_dirs'] += ['/usr/local/lib']     # homebrew
+    elif sys.platform.startswith('dragonfly'):
+        COMPILER_SETTINGS['include_dirs'] += ['/usr/local/include'] # homebrew
+        COMPILER_SETTINGS['library_dirs'] += ['/usr/local/lib']     # homebrew
     if MPI:
         COMPILER_SETTINGS['include_dirs'] += [mpi4py.get_include()]
     COMPILER_SETTINGS['runtime_library_dirs'] = [op.abspath(x) for x in COMPILER_SETTINGS['library_dirs']]
