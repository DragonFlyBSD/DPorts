--- vendor/github.com/hashicorp/packer-plugin-sdk/pathing/config_file_unix.go.orig	2026-11-19 14:31:42 UTC
+++ vendor/github.com/hashicorp/packer-plugin-sdk/pathing/config_file_unix.go
@@ -1,4 +1,4 @@
-//go:build darwin || freebsd || linux || netbsd || openbsd || solaris
+//go:build darwin || dragonfly || freebsd || linux || netbsd || openbsd || solaris
 // +build darwin freebsd linux netbsd openbsd solaris
 
 package pathing
