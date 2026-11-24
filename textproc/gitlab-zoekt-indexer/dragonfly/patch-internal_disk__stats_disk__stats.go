--- internal/disk_stats/disk_stats.go.orig	2026-11-23 00:00:00 UTC
+++ internal/disk_stats/disk_stats.go
@@ -36,8 +36,8 @@
 		return DiskStats{}, err
 	}
 
-	all := fs.Blocks * uint64(fs.Bsize) //nolint:gosec
-	free := fs.Bfree * uint64(fs.Bsize) //nolint:gosec
+	all := uint64(fs.Blocks) * uint64(fs.Bsize) //nolint:gosec
+	free := uint64(fs.Bfree) * uint64(fs.Bsize) //nolint:gosec
 
 	return DiskStats{All: all, Free: free, Used: all - free}, nil
 }
