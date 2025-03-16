--- vendor/github.com/moby/term/termios_bsd.go.orig	Wed Mar 12 20:50:05 2025
+++ vendor/github.com/moby/term/termios_bsd.go	Wed Mar 12 20:50:26 2025
@@ -1,5 +1,5 @@
-//go:build darwin || freebsd || openbsd || netbsd
-// +build darwin freebsd openbsd netbsd
+//go:build darwin || dragonfly || freebsd || openbsd || netbsd
+// +build darwin dragonfly freebsd openbsd netbsd
 
 package term
 
