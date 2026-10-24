--- kbfs/libkbfs/disk_limits_unix.go.intermediate
+++ kbfs/libkbfs/disk_limits_unix.go
@@ -33,13 +33,13 @@
 	// #nosec G115 -- Bsize is typically uint32 or int64 depending on platform, conversion to uint64 is safe
 	availableBytes = uint64(stat.Bavail) * uint64(stat.Bsize)
 	// #nosec G115 -- Bsize is typically uint32 or int64 depending on platform, conversion to uint64 is safe
-	totalBytes = stat.Blocks * uint64(stat.Bsize)
+	totalBytes = uint64(stat.Blocks) * uint64(stat.Bsize)
 	// Some filesystems, like btrfs, don't keep track of inodes.
 	// (See https://github.com/keybase/client/issues/6206 .) Use
 	// the total inode count to detect that case.
 	if stat.Files > 0 {
 		availableFiles = uint64(stat.Ffree)
-		totalFiles = stat.Files
+		totalFiles = uint64(stat.Files)
 	} else {
 		availableFiles = math.MaxInt64
 		totalFiles = math.MaxInt64
