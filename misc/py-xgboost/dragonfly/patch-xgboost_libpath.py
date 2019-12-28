--- xgboost/libpath.py.intermediate	2019-12-24 21:55:28.000000000 +0000
+++ xgboost/libpath.py
@@ -33,7 +33,7 @@ def find_lib_path():
             # hack for pip installation when copy all parent source directory here
             dll_path.append(os.path.join(curr_path, './windows/Release/'))
         dll_path = [os.path.join(p, 'xgboost.dll') for p in dll_path]
-    elif sys.platform.startswith('linux') or sys.platform.startswith('freebsd'):
+    elif sys.platform.startswith('linux') or sys.platform.startswith('freebsd') or sys.platform.startswith('dragonfly'):
         dll_path = [os.path.join(p, 'libxgboost.so') for p in dll_path]
     elif sys.platform == 'darwin':
         dll_path = [os.path.join(p, 'libxgboost.dylib') for p in dll_path]
