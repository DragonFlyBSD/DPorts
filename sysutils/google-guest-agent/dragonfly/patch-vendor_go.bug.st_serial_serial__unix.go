--- vendor/go.bug.st/serial/serial_unix.go.orig	2026-07-15 12:25:00 UTC
+++ vendor/go.bug.st/serial/serial_unix.go
@@ -4,7 +4,7 @@
 // license that can be found in the LICENSE file.
 //
 
-//go:build linux || darwin || freebsd || openbsd
+//go:build linux || darwin || dragonfly || freebsd || openbsd
 
 package serial
 
