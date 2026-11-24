--- vendor/github.com/tonistiigi/fsutil/copy/copy_otherbsd.go.orig	2026-11-19 14:49:37 UTC
+++ vendor/github.com/tonistiigi/fsutil/copy/copy_otherbsd.go
@@ -1,4 +1,4 @@
-//go:build openbsd || netbsd
+//go:build dragonfly || openbsd || netbsd
 
 package fs
 
