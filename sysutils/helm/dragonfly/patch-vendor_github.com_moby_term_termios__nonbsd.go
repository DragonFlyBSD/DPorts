--- vendor/github.com/moby/term/termios_nonbsd.go.orig	Wed Mar 12 20:50:12 2025
+++ vendor/github.com/moby/term/termios_nonbsd.go	Wed Mar 12 20:51:16 2025
@@ -1,5 +1,5 @@
-//go:build !darwin && !freebsd && !netbsd && !openbsd && !windows
-// +build !darwin,!freebsd,!netbsd,!openbsd,!windows
+//go:build !darwin && !dragonfly && !freebsd && !netbsd && !openbsd && !windows
+// +build !darwin,!dragonfly,!freebsd,!netbsd,!openbsd,!windows
 
 package term
 
