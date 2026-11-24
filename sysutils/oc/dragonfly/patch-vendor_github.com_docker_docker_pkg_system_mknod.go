--- vendor/github.com/docker/docker/pkg/system/mknod.go.orig	2026-11-19 12:37:41 UTC
+++ vendor/github.com/docker/docker/pkg/system/mknod.go
@@ -9,7 +9,7 @@
 // Mknod creates a filesystem node (file, device special file or named pipe) named path
 // with attributes specified by mode and dev.
 func Mknod(path string, mode uint32, dev int) error {
-	return unix.Mknod(path, mode, uint64(dev))
+	return unix.Mknod(path, mode, dev)
 }
 
 // Mkdev is used to build the value of linux devices (in /dev/) which specifies major
