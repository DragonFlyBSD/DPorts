diff --git v8/tools/testrunner/local/utils.py v8/tools/testrunner/local/utils.py
index a73941021b8..5ad1997fcd3 100644
--- v8/tools/testrunner/local/utils.py
+++ v8/tools/testrunner/local/utils.py
@@ -77,6 +77,10 @@ def GuessOS():
     # On Windows Vista platform.system() can return 'Microsoft' with some
     # versions of Python, see http://bugs.python.org/issue1082
     return 'windows'
+  elif system == 'DragonFlyBSD':
+    return 'dragonfly'
+  elif system == 'DragonFly':
+    return 'dragonfly'
   elif system == 'FreeBSD':
     return 'freebsd'
   elif system == 'OpenBSD':
