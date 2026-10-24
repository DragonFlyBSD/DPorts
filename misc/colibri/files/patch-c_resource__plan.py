-- determine available memory on FreeBSD

--- c/resource_plan.py.orig	2026-07-14 21:46:42 UTC
+++ c/resource_plan.py
@@ -78,11 +78,20 @@ def memory_available():
 
 def memory_available():
     # Linux (and MSYS2/Git-Bash CPython where /proc exists): MemAvailable.
-    try:
-        text = Path("/proc/meminfo").read_text()
-        return int(re.search(r"MemAvailable:\s+(\d+)", text).group(1)) * 1024
-    except (OSError, AttributeError):
-        pass
+    if sys.platform == "linux":
+        try:
+            text = Path("/proc/meminfo").read_text()
+            return int(re.search(r"MemAvailable:\s+(\d+)", text).group(1)) * 1024
+        except (OSError, AttributeError):
+            pass
+
+    # FreeBSD
+    if sys.platform.startswith("freebsd"):
+        import psutil
+
+        # returns available memory in bytes
+        return psutil.virtual_memory().available
+
     # Windows native CPython: GlobalMemoryStatusEx -> ullAvailPhys.
     # Same definition the C engine uses (compat_meminfo in compat.h):
     # standby/free/zero pages, i.e. reclaimable without swapping.
