--- setup.py.orig
+++ setup.py
@@ -228,7 +228,7 @@
 
 def find_libpng():
     # Returns (found, include dir, library dir, library name)
-    if sys.platform in ("linux", "darwin", "aix") or sys.platform.startswith("freebsd"):
+    if sys.platform in ("linux", "darwin", "aix") or sys.platform.startswith(("freebsd", "dragonfly")):
         libpng_config = shutil.which("libpng-config")
         if libpng_config is None:
             warnings.warn("libpng-config not found")
@@ -291,7 +291,7 @@
                 return True, str(include_dir), str(library_dir)
         print(f"{searching_for}. Didn't find in {prefix_env_var}.")
 
-    if sys.platform in ("linux",) or sys.platform.startswith("freebsd"):
+    if sys.platform in ("linux",) or sys.platform.startswith(("freebsd", "dragonfly")):
         for prefix in (Path("/usr/include"), Path("/usr/local/include")):
             if (prefix / header).exists():
                 print(f"{searching_for}. Found in {prefix}.")
