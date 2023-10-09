--- vendor/github.com/moby/term/termios_bsd.go.orig	2023-06-14 09:47:38 UTC
+++ vendor/github.com/moby/term/termios_bsd.go
@@ -1,5 +1,5 @@
-//go:build darwin || freebsd || openbsd || netbsd
-// +build darwin freebsd openbsd netbsd
+//go:build darwin || freebsd || openbsd || netbsd || dragonfly
+// +build darwin freebsd openbsd netbsd dragonfly
 
 package term
 
