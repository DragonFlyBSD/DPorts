--- vendor/github.com/nsf/termbox-go/syscalls_nonbsd.go.orig	2026-10-26 03:52:35 UTC
+++ vendor/github.com/nsf/termbox-go/syscalls_nonbsd.go
@@ -1,4 +1,4 @@
-//go:build !darwin && !freebsd && !netbsd && !openbsd && !windows
+//go:build !darwin && !dragonfly && !freebsd && !netbsd && !openbsd && !windows
 
 package termbox
 
