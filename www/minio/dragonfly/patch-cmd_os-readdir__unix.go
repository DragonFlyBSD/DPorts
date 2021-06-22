--- cmd/os-readdir_unix.go.orig	2021-06-22 16:25:08.735416000 +0200
+++ cmd/os-readdir_unix.go	2021-06-22 16:26:51.883044000 +0200
@@ -1,4 +1,4 @@
-// +build linux,!appengine darwin freebsd netbsd openbsd
+// +build linux,!appengine darwin dragonfly freebsd netbsd openbsd
 
 /*
  * MinIO Cloud Storage, (C) 2016-2020 MinIO, Inc.
@@ -46,13 +46,14 @@
 func parseDirEnt(buf []byte) (consumed int, name []byte, typ os.FileMode, err error) {
 	// golang.org/issue/15653
 	dirent := (*syscall.Dirent)(unsafe.Pointer(&buf[0]))
-	if v := unsafe.Offsetof(dirent.Reclen) + unsafe.Sizeof(dirent.Reclen); uintptr(len(buf)) < v {
+    if v := unsafe.Offsetof(dirent.Namlen) + unsafe.Sizeof(dirent.Namlen); uintptr(len(buf)) < v {
 		return consumed, nil, typ, fmt.Errorf("buf size of %d smaller than dirent header size %d", len(buf), v)
 	}
-	if len(buf) < int(dirent.Reclen) {
-		return consumed, nil, typ, fmt.Errorf("buf size %d < record length %d", len(buf), dirent.Reclen)
+    reclen := ((int(unsafe.Offsetof(dirent.Name)) + int(dirent.Namlen) + 1 + 7) &^ 7)
+    if len(buf) < reclen {
+        return consumed, name, typ, fmt.Errorf("buf size %d < record length %d", len(buf), reclen)
 	}
-	consumed = int(dirent.Reclen)
+    consumed = reclen
 	if direntInode(dirent) == 0 { // File absent in directory.
 		return
 	}
