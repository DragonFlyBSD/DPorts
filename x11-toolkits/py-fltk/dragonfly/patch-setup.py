--- setup.py.intermediate	2019-03-29 13:24:17 UTC
+++ setup.py
@@ -106,7 +106,7 @@ elif sys.platform.startswith('linux'):
     compile_arg_list.append('-Werror=format-security')
     lib_dir_list = [fltk_lib_dir, '/usr/lib']
     lib_list = ["fltk"]
-elif sys.platform[0:7] == 'freebsd':
+elif sys.platform[0:7] == 'freebsd' or sys.platform[0:9] == 'dragonfly':
     print("Building for: %s"%sys.platform)
     def_list = [('UNIX', '1')]
     lib_dir_list = [fltk_lib_dir,'/usr/local/lib','/usr/lib']
