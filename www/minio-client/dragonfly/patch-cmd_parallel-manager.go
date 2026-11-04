--- cmd/parallel-manager.go.orig	2025-05-21 01:59:54 UTC
+++ cmd/parallel-manager.go
@@ -255,8 +255,8 @@
 
 	} // for all other platforms limits are based on virtual memory.
 
-	memStats, _ := mem.VirtualMemory()
-	if memStats.Available > 0 {
+	memStats, err := mem.VirtualMemory()
+	if err == nil && memStats.Available > 0 {
 		available = memStats.Available
 	}
 
