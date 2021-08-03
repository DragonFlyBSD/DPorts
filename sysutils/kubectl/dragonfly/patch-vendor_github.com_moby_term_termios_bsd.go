--- vendor/github.com/moby/term/termios_bsd.go.orig	2021-08-03 21:03:03.516334000 +0200
+++ vendor/github.com/moby/term/termios_bsd.go	2021-08-03 21:03:51.415246000 +0200
@@ -1,4 +1,4 @@
-// +build darwin freebsd openbsd netbsd
+// +build darwin freebsd openbsd netbsd dragonfly
 
 package term
 
