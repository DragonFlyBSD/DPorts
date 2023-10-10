--- vendor/github.com/moby/term/termios_nonbsd.go.orig	2023-06-14 09:47:38 UTC
+++ vendor/github.com/moby/term/termios_nonbsd.go
@@ -1,5 +1,5 @@
-//go:build !darwin && !freebsd && !netbsd && !openbsd && !windows
-// +build !darwin,!freebsd,!netbsd,!openbsd,!windows
+//go:build !darwin && !freebsd && !netbsd && !openbsd && !windows && !dragonfly
+//+build !darwin,!freebsd,!netbsd,!openbsd,!windows,!dragonfly
 
 package term
 
