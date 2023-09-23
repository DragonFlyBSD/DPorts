diff --git build/landmine_utils.py build/landmine_utils.py
index b126f4fff0f..9b4f517d2d2 100644
--- build/landmine_utils.py
+++ build/landmine_utils.py
@@ -11,7 +11,7 @@ def IsWindows():
 
 
 def IsLinux():
-  return sys.platform.startswith(('linux', 'freebsd', 'netbsd', 'openbsd'))
+  return sys.platform.startswith(('linux', 'freebsd', 'netbsd', 'openbsd', 'dragonfly'))
 
 
 def IsMac():
