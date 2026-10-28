--- agent/fileutil/fileutil_unix.go.orig	2026-10-26 05:42:18 UTC
+++ agent/fileutil/fileutil_unix.go
@@ -106,8 +106,8 @@ func GetDiskSpaceInfo() (diskSpaceInfo DiskSpaceInfo, err error) {
 	return DiskSpaceInfo{
 		// On Linux the struct statfs.f_bavail field is unsigned, but on FreeBSD the field is an int64
 		AvailBytes: (int64)((uint64)(stat.Bavail) * bSize), // available space = # of available blocks * block size
-		FreeBytes:  (int64)(stat.Bfree * bSize),            // free space = # of free blocks * block size
-		TotalBytes: (int64)(stat.Blocks * bSize),           // total space = # of total blocks * block size
+		FreeBytes:  (int64)((uint64)(stat.Bfree) * bSize),  // free space = # of free blocks * block size
+		TotalBytes: (int64)((uint64)(stat.Blocks) * bSize), // total space = # of total blocks * block size
 	}, nil
 }
 
