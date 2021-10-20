--- readchar/readchar.py.orig	2021-09-11 13:08:37 UTC
+++ readchar/readchar.py
@@ -6,7 +6,7 @@ import sys
 
 if sys.platform.startswith("linux"):
     from .readchar_linux import readchar
-elif sys.platform.startswith("freebsd"):
+elif sys.platform.startswith("freebsd") or sys.platform.startswith('dragonfly'):
     from .readchar_linux import readchar
 elif sys.platform == "darwin":
     from .readchar_linux import readchar
