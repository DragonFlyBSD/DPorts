--- vendor/go.bug.st/serial/unixutils/select.go.orig	2026-11-19 14:31:54 UTC
+++ vendor/go.bug.st/serial/unixutils/select.go
@@ -4,7 +4,7 @@
 // license that can be found in the LICENSE file.
 //
 
-//go:build linux || darwin || freebsd || openbsd
+//go:build linux || darwin || dragonfly || freebsd || openbsd
 
 package unixutils
 
