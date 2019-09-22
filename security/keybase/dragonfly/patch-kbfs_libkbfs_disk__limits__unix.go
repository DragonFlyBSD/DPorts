--- kbfs/libkbfs/disk_limits_unix.go.intermediate	2019-09-22 17:32:29 UTC
+++ kbfs/libkbfs/disk_limits_unix.go
@@ -29,13 +29,13 @@ func getDiskLimits(path string) (
 
 	// Bavail is the free block count for an unprivileged user.
 	availableBytes = uint64(stat.Bavail) * uint64(stat.Bsize)
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
