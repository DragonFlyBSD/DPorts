--- vendor/github.com/tonistiigi/fsutil/copy/copy_otherbsd.go.orig
+++ vendor/github.com/tonistiigi/fsutil/copy/copy_otherbsd.go
@@ -1,4 +1,4 @@
-//go:build openbsd || netbsd
+//go:build dragonfly || openbsd || netbsd
 
 package fs
 
