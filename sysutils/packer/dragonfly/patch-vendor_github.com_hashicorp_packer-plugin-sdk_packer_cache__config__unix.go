--- vendor/github.com/hashicorp/packer-plugin-sdk/packer/cache_config_unix.go.orig	2022-10-03 22:28:17.416378000 +0200
+++ vendor/github.com/hashicorp/packer-plugin-sdk/packer/cache_config_unix.go	2022-10-03 22:28:36.475944000 +0200
@@ -1,5 +1,5 @@
-//go:build darwin || freebsd || linux || netbsd || openbsd || solaris
-// +build darwin freebsd linux netbsd openbsd solaris
+//go:build darwin || dragonfly || freebsd || linux || netbsd || openbsd || solaris
+// +build darwin dragonfly freebsd linux netbsd openbsd solaris
 
 package packer
 
