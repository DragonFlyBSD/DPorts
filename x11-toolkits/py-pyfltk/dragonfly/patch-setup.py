--- setup.py.orig
+++ setup.py
@@ -80,7 +80,7 @@
     compile_arg_list.append('-Werror=format-security')
     lib_dir_list = [fltk_lib_dir, '/usr/lib']
     lib_list = ["fltk"]
-elif sys.platform[0:7] == 'freebsd':
+elif sys.platform[0:7] == 'freebsd' or sys.platform.startswith('dragonfly'):
     print(f"Building for: {sys.platform}")
     def_list = [('UNIX', '1')]
     lib_dir_list = [fltk_lib_dir,'/usr/X11R6/lib','/usr/lib']
