--- vendor/github.com/hashicorp/packer-plugin-sdk/pathing/config_file_unix.go.orig
+++ vendor/github.com/hashicorp/packer-plugin-sdk/pathing/config_file_unix.go
@@ -1,7 +1,7 @@
 // Copyright IBM Corp. 2013, 2025
 // SPDX-License-Identifier: MPL-2.0
 
-//go:build aix || darwin || freebsd || linux || netbsd || openbsd || solaris
+//go:build aix || darwin || dragonfly || freebsd || linux || netbsd || openbsd || solaris
 
 package pathing
 
