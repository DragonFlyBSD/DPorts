--- vendor/gopkg.in/src-d/go-git.v4/worktree_bsd.go.orig	2019-07-10 18:10:08 UTC
+++ vendor/gopkg.in/src-d/go-git.v4/worktree_bsd.go
@@ -1,4 +1,4 @@
-// +build darwin freebsd netbsd openbsd
+// +build darwin freebsd netbsd openbsd dragonfly
 
 package git
 
@@ -12,7 +12,7 @@ import (
 func init() {
 	fillSystemInfo = func(e *index.Entry, sys interface{}) {
 		if os, ok := sys.(*syscall.Stat_t); ok {
-			e.CreatedAt = time.Unix(int64(os.Atimespec.Sec), int64(os.Atimespec.Nsec))
+			e.CreatedAt = time.Unix(int64(os.Atim.Sec), int64(os.Atim.Nsec))
 			e.Dev = uint32(os.Dev)
 			e.Inode = uint32(os.Ino)
 			e.GID = os.Gid
