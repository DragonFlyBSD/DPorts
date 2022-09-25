--- vendor/github.com/moby/term/termios_bsd.go.orig	2021-06-10 12:07:45 UTC
+++ vendor/github.com/moby/term/termios_bsd.go
@@ -1,4 +1,4 @@
-// +build darwin freebsd openbsd netbsd
+// +build darwin dragonfly freebsd openbsd netbsd
 
 package term
 
