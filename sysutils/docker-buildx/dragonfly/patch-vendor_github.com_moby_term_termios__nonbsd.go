--- vendor/github.com/moby/term/termios_nonbsd.go.orig	2026-11-19 14:49:36 UTC
+++ vendor/github.com/moby/term/termios_nonbsd.go
@@ -1,5 +1,5 @@
-//go:build !darwin && !freebsd && !netbsd && !openbsd && !windows
-// +build !darwin,!freebsd,!netbsd,!openbsd,!windows
+//go:build !darwin && !dragonfly && !freebsd && !netbsd && !openbsd && !windows
+// +build !darwin,!dragonfly,!freebsd,!netbsd,!openbsd,!windows
 
 package term
 
