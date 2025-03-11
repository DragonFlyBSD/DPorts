--- vendor/github.com/hashicorp/packer-plugin-sdk/pathing/config_file_unix.go.orig	Tue Mar 11 16:54:12 2025
+++ vendor/github.com/hashicorp/packer-plugin-sdk/pathing/config_file_unix.go	Tue Mar 11 16:54:28 2025
@@ -1,7 +1,7 @@
 // Copyright (c) HashiCorp, Inc.
 // SPDX-License-Identifier: MPL-2.0
 
-//go:build darwin || freebsd || linux || netbsd || openbsd || solaris
+//go:build darwin || dragonfly || freebsd || linux || netbsd || openbsd || solaris
 
 package pathing
 
