--- vendor/github.com/hashicorp/consul-template/signals/signals_unix.go.orig	2026-10-26 03:59:36 UTC
+++ vendor/github.com/hashicorp/consul-template/signals/signals_unix.go
@@ -1,8 +1,8 @@
 // Copyright IBM Corp. 2014, 2025
 // SPDX-License-Identifier: MPL-2.0
 
-//go:build linux || darwin || freebsd || openbsd || solaris || netbsd
-// +build linux darwin freebsd openbsd solaris netbsd
+//go:build linux || darwin || freebsd || openbsd || solaris || netbsd || dragonfly
+// +build linux darwin freebsd openbsd solaris netbsd dragonfly
 
 package signals
 
