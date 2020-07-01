--- xgboost/libpath.py.intermediate	2020-07-01 08:59:08 UTC
+++ xgboost/libpath.py
@@ -41,7 +41,7 @@ def find_lib_path():
             dll_path.append(os.path.join(curr_path, './windows/Release/'))
         dll_path = [os.path.join(p, 'xgboost.dll') for p in dll_path]
     elif sys.platform.startswith('linux') or sys.platform.startswith(
-            'freebsd'):
+            'freebsd') or sys.platform.startswith('dragonfly'):
         dll_path = [os.path.join(p, 'libxgboost.so') for p in dll_path]
     elif sys.platform == 'darwin':
         dll_path = [os.path.join(p, 'libxgboost.dylib') for p in dll_path]
