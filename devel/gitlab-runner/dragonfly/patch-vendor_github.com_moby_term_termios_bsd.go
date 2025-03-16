--- vendor/github.com/moby/term/termios_bsd.go.orig	Wed Mar 12 17:47:57 2025
+++ vendor/github.com/moby/term/termios_bsd.go	Wed Mar 12 17:48:21 2025
@@ -1,5 +1,5 @@
-//go:build darwin || freebsd || openbsd || netbsd
-// +build darwin freebsd openbsd netbsd
+//go:build darwin || freebsd || openbsd || netbsd || dragonfly
+// +build darwin freebsd openbsd netbsd dragonfly
 
 package term
 
