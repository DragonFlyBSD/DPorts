--- vendor/github.com/tonistiigi/fsutil/copy/copy_unix.go.orig	2026-11-19 14:49:37 UTC
+++ vendor/github.com/tonistiigi/fsutil/copy/copy_unix.go
@@ -1,4 +1,4 @@
-//go:build solaris || darwin || freebsd || openbsd || netbsd
+//go:build solaris || darwin || dragonfly || freebsd || openbsd || netbsd
 
 package fs
 
