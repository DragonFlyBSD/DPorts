--- vendor/github.com/moby/term/termios_nonbsd.go.orig	Wed Mar 12 17:45:59 2025
+++ vendor/github.com/moby/term/termios_nonbsd.go	Wed Mar 12 17:47:22 2025
@@ -1,5 +1,5 @@
-//go:build !darwin && !freebsd && !netbsd && !openbsd && !windows
-// +build !darwin,!freebsd,!netbsd,!openbsd,!windows
+//go:build !darwin && !freebsd && !netbsd && !openbsd && !windows && !dragonfly
+// +build !darwin,!freebsd,!netbsd,!openbsd,!windows,!dragonfly
 
 package term
 
