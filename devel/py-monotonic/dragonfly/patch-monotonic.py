--- monotonic.py.orig	2018-05-03 20:40:45 UTC
+++ monotonic.py
@@ -144,6 +144,8 @@ except AttributeError:
 
             if sys.platform.startswith('linux'):
                 CLOCK_MONOTONIC = 1
+            elif sys.platform.startswith('dragonfly'):
+                CLOCK_MONOTONIC = 4
             elif sys.platform.startswith('freebsd'):
                 CLOCK_MONOTONIC = 4
             elif sys.platform.startswith('sunos5'):
