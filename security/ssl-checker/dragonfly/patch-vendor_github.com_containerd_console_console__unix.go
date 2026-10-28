--- vendor/github.com/containerd/console/console_unix.go.orig	2026-10-26 03:35:42 UTC
+++ vendor/github.com/containerd/console/console_unix.go
@@ -1,5 +1,5 @@
-//go:build darwin || freebsd || linux || netbsd || openbsd || zos
-// +build darwin freebsd linux netbsd openbsd zos
+//go:build darwin || dragonfly || freebsd || linux || netbsd || openbsd || zos
+// +build darwin dragonfly freebsd linux netbsd openbsd zos
 
 /*
    Copyright The containerd Authors.
