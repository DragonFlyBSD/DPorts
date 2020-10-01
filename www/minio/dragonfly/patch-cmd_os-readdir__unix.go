--- cmd/os-readdir_unix.go.orig	2020-09-08 22:56:11 UTC
+++ cmd/os-readdir_unix.go
@@ -1,4 +1,4 @@
-// +build linux,!appengine darwin freebsd netbsd openbsd
+// +build linux,!appengine darwin freebsd netbsd openbsd dragonfly
 
 /*
  * MinIO Cloud Storage, (C) 2016-2020 MinIO, Inc.
@@ -45,13 +45,14 @@ const unexpectedFileMode os.FileMode = o
 func parseDirEnt(buf []byte) (consumed int, name string, typ os.FileMode, err error) {
 	// golang.org/issue/15653
 	dirent := (*syscall.Dirent)(unsafe.Pointer(&buf[0]))
-	if v := unsafe.Offsetof(dirent.Reclen) + unsafe.Sizeof(dirent.Reclen); uintptr(len(buf)) < v {
+	if v := unsafe.Offsetof(dirent.Namlen) + unsafe.Sizeof(dirent.Namlen); uintptr(len(buf)) < v {
 		return consumed, name, typ, fmt.Errorf("buf size of %d smaller than dirent header size %d", len(buf), v)
 	}
-	if len(buf) < int(dirent.Reclen) {
-		return consumed, name, typ, fmt.Errorf("buf size %d < record length %d", len(buf), dirent.Reclen)
+	reclen := ((int(unsafe.Offsetof(dirent.Name)) + int(dirent.Namlen) + 1 + 7) &^ 7)
+	if len(buf) < reclen {
+		return consumed, name, typ, fmt.Errorf("buf size %d < record length %d", len(buf), reclen)
 	}
-	consumed = int(dirent.Reclen)
+	consumed = reclen
 	if direntInode(dirent) == 0 { // File absent in directory.
 		return
 	}
