--- pidfile/pid_unix.go.orig	2026-11-19 14:51:01 UTC
+++ pidfile/pid_unix.go
@@ -1,4 +1,4 @@
-//go:build linux || freebsd || netbsd
+//go:build dragonfly || linux || freebsd || netbsd
 
 package pidfile
 
