--- scripts/Util.py.orig	2019-02-06 16:37:43.000000000 +0000
+++ scripts/Util.py	2019-02-06 16:40:00.000000000 +0000
@@ -474,7 +474,7 @@
     platform = Darwin()
 elif sys.platform.startswith("aix"):
     platform = AIX()
-elif sys.platform.startswith("freebsd"):
+elif sys.platform.startswith("freebsd") or sys.platform.startswith("dragonfly"):
     platform = FreeBSD()
 elif sys.platform.startswith("linux") or sys.platform.startswith("gnukfreebsd"):
     platform = Linux()
