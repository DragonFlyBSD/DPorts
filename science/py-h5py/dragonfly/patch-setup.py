--- setup.py.intermediate	2014-03-30 09:28:33.672237000 +0000
+++ setup.py
@@ -135,7 +135,7 @@ else:
         COMPILER_SETTINGS['library_dirs'] += ['/opt/local/lib']     # macports
         COMPILER_SETTINGS['include_dirs'] += ['/usr/local/include'] # homebrew
         COMPILER_SETTINGS['library_dirs'] += ['/usr/local/lib']     # homebrew
-    elif sys.platform.startswith('freebsd'):
+    elif sys.platform.startswith('dragonfly'):
         COMPILER_SETTINGS['include_dirs'] += ['%%LOCALBASE%%/include'] # homebrew
         COMPILER_SETTINGS['library_dirs'] += ['%%LOCALBASE%%/lib']     # homebrew
     if MPI:
