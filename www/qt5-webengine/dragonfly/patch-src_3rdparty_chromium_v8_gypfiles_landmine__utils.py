--- src/3rdparty/chromium/v8/gypfiles/landmine_utils.py.orig	2018-04-10 14:05:55.000000000 +0000
+++ src/3rdparty/chromium/v8/gypfiles/landmine_utils.py
@@ -33,7 +33,7 @@ def IsWindows():
 
 @memoize()
 def IsLinux():
-  return sys.platform.startswith(('linux', 'freebsd'))
+  return sys.platform.startswith(('linux', 'freebsd', 'dragonfly'))
 
 
 @memoize()
