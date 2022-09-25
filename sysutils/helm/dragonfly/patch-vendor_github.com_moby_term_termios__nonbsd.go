--- vendor/github.com/moby/term/termios_nonbsd.go.orig	2022-09-13 11:24:09 UTC
+++ vendor/github.com/moby/term/termios_nonbsd.go
@@ -1,4 +1,4 @@
-//+build !darwin,!freebsd,!netbsd,!openbsd,!windows
+//+build !darwin,!dragonfly,!freebsd,!netbsd,!openbsd,!windows
 
 package term
 
