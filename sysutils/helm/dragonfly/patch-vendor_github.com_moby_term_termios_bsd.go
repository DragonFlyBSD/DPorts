--- vendor/github.com/moby/term/termios_bsd.go.orig	2021-06-20 14:26:06.506593000 +0200
+++ vendor/github.com/moby/term/termios_bsd.go	2021-06-20 14:26:13.366436000 +0200
@@ -1,4 +1,4 @@
-// +build darwin freebsd openbsd netbsd
+// +build darwin dragonfly freebsd openbsd netbsd
 
 package term // import "github.com/moby/term"
 
