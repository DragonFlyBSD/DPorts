--- vendor/github.com/nsf/termbox-go/syscalls_bsd.go.orig	2026-10-26 03:52:35 UTC
+++ vendor/github.com/nsf/termbox-go/syscalls_bsd.go
@@ -1,4 +1,4 @@
-//go:build darwin || freebsd || openbsd || netbsd
+//go:build darwin || dragonfly || freebsd || openbsd || netbsd
 
 package termbox
 
