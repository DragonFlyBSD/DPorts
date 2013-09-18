--- setup.py.orig	2012-11-21 07:20:49.000000000 +0000
+++ setup.py
@@ -71,7 +71,7 @@ class build_ext(distutils.command.build_
                 depends = ext.depends)
         fileName = os.path.splitext(self.get_ext_filename(ext.name))[0]
         fullName = os.path.join(self.build_lib, fileName)
-        libraryDirs = ext.library_dirs or []
+        libraryDirs = ext.library_dirs or ['/usr/local/lib']
         libraries = self.get_libraries(ext)
         extraArgs = ext.extra_link_args or []
         if sys.platform != "win32":
