--- vendor/github.com/moby/term/termios_nonbsd.go.orig	2021-08-03 20:58:52.612037000 +0200
+++ vendor/github.com/moby/term/termios_nonbsd.go	2021-08-03 20:59:01.051845000 +0200
@@ -1,4 +1,4 @@
-//+build !darwin,!freebsd,!netbsd,!openbsd,!windows
+//+build !darwin,!freebsd,!netbsd,!openbsd,!windows,!dragonfly
 
 package term
 
