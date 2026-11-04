--- cmd/os_unix.go.orig	2025-10-15 17:29:55 UTC
+++ cmd/os_unix.go
@@ -1,5 +1,5 @@
-//go:build (linux && !appengine) || darwin || freebsd || netbsd || openbsd
-// +build linux,!appengine darwin freebsd netbsd openbsd
+//go:build (linux && !appengine) || darwin || dragonfly || freebsd || netbsd || openbsd
+// +build linux,!appengine darwin dragonfly freebsd netbsd openbsd
 
 // Copyright (c) 2015-2021 MinIO, Inc.
 //
@@ -128,13 +128,15 @@
 func parseDirEnt(buf []byte) (consumed int, name []byte, typ os.FileMode, err error) {
 	// golang.org/issue/15653
 	dirent := (*syscall.Dirent)(unsafe.Pointer(&buf[0]))
-	if v := unsafe.Offsetof(dirent.Reclen) + unsafe.Sizeof(dirent.Reclen); uintptr(len(buf)) < v {
+	if v := unsafe.Offsetof(dirent.Namlen) + unsafe.Sizeof(dirent.Namlen); uintptr(len(buf)) < v {
 		return consumed, nil, typ, fmt.Errorf("buf size of %d smaller than dirent header size %d", len(buf), v)
 	}
-	if len(buf) < int(dirent.Reclen) {
-		return consumed, nil, typ, fmt.Errorf("buf size %d < record length %d", len(buf), dirent.Reclen)
+	// DragonFly's dirent has no d_reclen: _DIRENT_RECLEN(d_namlen)
+	reclen := (int(unsafe.Offsetof(dirent.Name)) + int(dirent.Namlen) + 1 + 7) &^ 7
+	if len(buf) < reclen {
+		return consumed, nil, typ, fmt.Errorf("buf size %d < record length %d", len(buf), reclen)
 	}
-	consumed = int(dirent.Reclen)
+	consumed = reclen
 	if direntInode(dirent) == 0 { // File absent in directory.
 		return consumed, name, typ, err
 	}
