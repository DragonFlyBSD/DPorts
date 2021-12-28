--- setup.py.intermediate	2021-12-28 13:18:06.000000000 +0000
+++ setup.py
@@ -904,7 +904,7 @@ def compile_python(base_path: str) -> No
 
 def create_linux_bundle_gunk(ddir: str, libdir_name: str) -> None:
     if not os.path.exists('docs/_build/html'):
-        make = "gmake" if is_freebsd else "make"
+        make = "gmake" if (is_freebsd or is_dragonflybsd) else "make"
         run_tool([make, 'docs'])
     copy_man_pages(ddir)
     copy_html_docs(ddir)
