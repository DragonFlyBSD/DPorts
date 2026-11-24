--- vendor/github.com/moby/term/termios_nonbsd.go.orig	2026-11-19 12:37:41 UTC
+++ vendor/github.com/moby/term/termios_nonbsd.go
@@ -1,4 +1,4 @@
-//+build !darwin,!freebsd,!netbsd,!openbsd,!windows
+//+build !darwin,!dragonfly,!freebsd,!netbsd,!openbsd,!windows
 
 package term
 
