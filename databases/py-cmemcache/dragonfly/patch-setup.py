--- setup.py.orig	2006-07-06 19:14:04.000000000 +0000
+++ setup.py
@@ -36,7 +36,7 @@ cmemcache = Extension(
     extra_compile_args = ['-Wall'],
     libraries=['memcache'],
     library_dirs=['/usr/local/lib'],
-    extra_link_args=['--no-undefined', '-Wl,-rpath=/usr/local/lib'],
+    extra_link_args=['-Wl,-rpath=/usr/local/lib'],
     define_macros=define,
     undef_macros=undefine)
 
