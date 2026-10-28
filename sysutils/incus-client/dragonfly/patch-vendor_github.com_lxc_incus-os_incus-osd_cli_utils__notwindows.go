--- vendor/github.com/lxc/incus-os/incus-osd/cli/utils_notwindows.go.orig	2026-10-26 05:14:33 UTC
+++ vendor/github.com/lxc/incus-os/incus-osd/cli/utils_notwindows.go
@@ -1,4 +1,4 @@
-//go:build (linux && !appengine) || darwin || freebsd || openbsd
+//go:build (linux && !appengine) || darwin || freebsd || openbsd || dragonfly
 
 package cli
 
