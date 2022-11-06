--- util/cmake/condition_simplifier.py.orig	2022-09-02 16:13:45 UTC
+++ util/cmake/condition_simplifier.py
@@ -107,7 +107,7 @@ def _recursive_simplify(expr):
     # Simplify even further, based on domain knowledge:
     # windowses = ('WIN32', 'WINRT')
     apples = ("MACOS", "UIKIT", "IOS", "TVOS", "WATCHOS")
-    bsds = ("FREEBSD", "OPENBSD", "NETBSD")
+    bsds = ("FREEBSD", "OPENBSD", "NETBSD", "DRAGONFLY")
     androids = ("ANDROID",)
     unixes = (
         "APPLE",
