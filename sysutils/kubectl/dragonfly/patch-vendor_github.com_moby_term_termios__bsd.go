--- vendor/github.com/moby/term/termios_bsd.go.orig	2020-08-26 14:22:05 UTC
+++ vendor/github.com/moby/term/termios_bsd.go
@@ -1,4 +1,4 @@
-// +build darwin freebsd openbsd netbsd
+// +build darwin freebsd openbsd netbsd dragonfly
 
 package term // import "github.com/moby/term"
 
