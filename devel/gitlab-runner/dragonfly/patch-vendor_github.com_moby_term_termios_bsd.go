--- vendor/github.com/moby/term/termios_bsd.go.orig	2021-06-13 15:06:46.795255000 +0200
+++ vendor/github.com/moby/term/termios_bsd.go	2021-06-13 15:06:53.465106000 +0200
@@ -1,4 +1,4 @@
-// +build darwin freebsd openbsd netbsd
+// +build darwin freebsd openbsd netbsd dragonfly
 
 package term
 
