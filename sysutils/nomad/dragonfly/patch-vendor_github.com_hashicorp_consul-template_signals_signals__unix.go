--- vendor/github.com/hashicorp/consul-template/signals/signals_unix.go.orig
+++ vendor/github.com/hashicorp/consul-template/signals/signals_unix.go
@@ -1,8 +1,8 @@
 // Copyright (c) HashiCorp, Inc.
 // SPDX-License-Identifier: MPL-2.0
 
-//go:build linux || darwin || freebsd || openbsd || solaris || netbsd
-// +build linux darwin freebsd openbsd solaris netbsd
+//go:build linux || darwin || freebsd || openbsd || solaris || netbsd || dragonfly
+// +build linux darwin freebsd openbsd solaris netbsd dragonfly
 
 package signals
 
