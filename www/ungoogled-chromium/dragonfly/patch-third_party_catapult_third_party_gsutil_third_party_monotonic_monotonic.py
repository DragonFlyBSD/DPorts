diff --git third_party/catapult/third_party/gsutil/third_party/monotonic/monotonic.py third_party/catapult/third_party/gsutil/third_party/monotonic/monotonic.py
index e36b7f7943b..c48cc7bb6c4 100644
--- third_party/catapult/third_party/gsutil/third_party/monotonic/monotonic.py
+++ third_party/catapult/third_party/gsutil/third_party/monotonic/monotonic.py
@@ -146,6 +146,8 @@ except AttributeError:
                 CLOCK_MONOTONIC = 1
             elif sys.platform.startswith('freebsd'):
                 CLOCK_MONOTONIC = 4
+            elif sys.platform.startswith('dragonfly'):
+                CLOCK_MONOTONIC = 4
             elif sys.platform.startswith('sunos5'):
                 CLOCK_MONOTONIC = 4
             elif 'bsd' in sys.platform:
