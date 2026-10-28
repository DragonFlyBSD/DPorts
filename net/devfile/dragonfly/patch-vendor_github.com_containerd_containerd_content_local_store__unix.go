--- vendor/github.com/containerd/containerd/content/local/store_unix.go.orig	2026-10-26 05:02:26 UTC
+++ vendor/github.com/containerd/containerd/content/local/store_unix.go
@@ -1,4 +1,4 @@
-//go:build linux || solaris
+//go:build linux || solaris || dragonfly
 
 /*
    Copyright The containerd Authors.
