--- vendor/github.com/moby/term/termios_bsd.go.orig
+++ vendor/github.com/moby/term/termios_bsd.go
@@ -1,5 +1,5 @@
-//go:build darwin || freebsd || openbsd || netbsd
-// +build darwin freebsd openbsd netbsd
+//go:build darwin || dragonfly || freebsd || openbsd || netbsd
+// +build darwin dragonfly freebsd openbsd netbsd
 
 package term
 
