--- internal/disk_stats/disk_stats.go.orig	2026-08-31 21:27:59 UTC
+++ internal/disk_stats/disk_stats.go
@@ -34,8 +34,8 @@
 		return DiskStats{}, err
 	}
 
-	all := fs.Blocks * uint64(fs.Bsize) //nolint:gosec
-	free := fs.Bfree * uint64(fs.Bsize) //nolint:gosec
+	all := uint64(fs.Blocks) * uint64(fs.Bsize) //nolint:gosec
+	free := uint64(fs.Bfree) * uint64(fs.Bsize) //nolint:gosec
 	used := all - free
 	indexed, err := getIndexSize(path)
 	if indexed < 0 || err != nil {
