--- vendor/go.bug.st/serial/serial_resetbuf_linux_bsd.go.orig	2026-11-19 14:31:54 UTC
+++ vendor/go.bug.st/serial/serial_resetbuf_linux_bsd.go
@@ -4,7 +4,7 @@
 // license that can be found in the LICENSE file.
 //
 
-//go:build linux || freebsd || openbsd
+//go:build linux || dragonfly || freebsd || openbsd
 
 package serial
 
