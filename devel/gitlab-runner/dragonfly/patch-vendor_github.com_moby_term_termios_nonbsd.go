--- vendor/github.com/moby/term/termios_nonbsd.go.orig	2021-06-13 15:09:42.191308000 +0200
+++ vendor/github.com/moby/term/termios_nonbsd.go	2021-06-13 15:09:50.701117000 +0200
@@ -1,4 +1,4 @@
-//+build !darwin,!freebsd,!netbsd,!openbsd,!windows
+//+build !darwin,!freebsd,!netbsd,!openbsd,!windows,!dragonfly
 
 package term
 
