--- python/mozbuild/mozbuild/backend/recursivemake.py.orig	2018-01-11 18:49:46 UTC
+++ python/mozbuild/mozbuild/backend/recursivemake.py
@@ -1307,11 +1307,11 @@ class RecursiveMakeBackend(CommonBackend
                                 raise Exception("Wildcards are only supported in the filename part of "
                                                 "srcdir-relative or absolute paths.")
 
-                            install_manifest.add_pattern_symlink(basepath, wild, path)
+                            install_manifest.add_pattern_copy(basepath, wild, path)
                         else:
-                            install_manifest.add_pattern_symlink(f.srcdir, f, path)
+                            install_manifest.add_pattern_copy(f.srcdir, f, path)
                     else:
-                        install_manifest.add_symlink(f.full_path, dest)
+                        install_manifest.add_copy(f.full_path, dest)
                 else:
                     install_manifest.add_optional_exists(dest)
                     backend_file.write('%s_FILES += %s\n' % (
