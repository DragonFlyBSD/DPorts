--- ./platform/gsutil/third_party/monotonic/monotonic.py.orig	2019-02-15 13:44:21.239236000 +0100
+++ ./platform/gsutil/third_party/monotonic/monotonic.py	2019-02-15 13:44:41.209597000 +0100
@@ -144,7 +144,7 @@
 
             if sys.platform.startswith('linux'):
                 CLOCK_MONOTONIC = 1
-            elif sys.platform.startswith('freebsd'):
+            elif sys.platform.startswith('freebsd') or sys.platform.startswith('dragonfly'):
                 CLOCK_MONOTONIC = 4
             elif sys.platform.startswith('sunos5'):
                 CLOCK_MONOTONIC = 4
