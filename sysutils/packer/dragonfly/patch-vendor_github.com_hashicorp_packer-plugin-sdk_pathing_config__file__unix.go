--- vendor/github.com/hashicorp/packer-plugin-sdk/pathing/config_file_unix.go.orig	2022-10-03 22:26:07.729319000 +0200
+++ vendor/github.com/hashicorp/packer-plugin-sdk/pathing/config_file_unix.go	2022-10-03 22:30:42.213095000 +0200
@@ -1,5 +1,5 @@
-//go:build darwin || freebsd || linux || netbsd || openbsd || solaris
-// +build darwin freebsd linux netbsd openbsd solaris
+//go:build darwin || dragonfly || freebsd || linux || netbsd || openbsd || solaris
+// +build darwin dragonfly freebsd linux netbsd openbsd solaris
 
 package pathing
 
