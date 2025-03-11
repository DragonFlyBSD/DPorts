diff --git build/landmine_utils.py build/landmine_utils.py
index b126f4fff0fa..9b4f517d2d26 100644
--- build/landmine_utils.py
+++ build/landmine_utils.py
@@ -11,7 +11,7 @@ def IsWindows():
 
 
 def IsLinux():
-  return sys.platform.startswith(('linux', 'freebsd', 'netbsd', 'openbsd'))
+  return sys.platform.startswith(('linux', 'freebsd', 'netbsd', 'openbsd', 'dragonfly'))
 
 
 def IsMac():
diff --git build/toolchain/dragonfly/BUILD.gn build/toolchain/dragonfly/BUILD.gn
new file mode 100644
index 000000000000..622a0aac8d8b
