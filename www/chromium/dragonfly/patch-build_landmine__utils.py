--- build/landmine_utils.py.orig
+++ build/landmine_utils.py
@@ -11,7 +11,7 @@
 
 
 def IsLinux():
-    return sys.platform.startswith(('linux', 'freebsd', 'netbsd', 'openbsd'))
+    return sys.platform.startswith(('linux', 'freebsd', 'netbsd', 'openbsd', 'dragonfly'))
 
 
 def IsMac():
