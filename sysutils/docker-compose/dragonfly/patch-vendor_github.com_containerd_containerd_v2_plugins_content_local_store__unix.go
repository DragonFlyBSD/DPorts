--- vendor/github.com/containerd/containerd/v2/plugins/content/local/store_unix.go.orig
+++ vendor/github.com/containerd/containerd/v2/plugins/content/local/store_unix.go
@@ -1,4 +1,4 @@
-//go:build linux || solaris
+//go:build dragonfly || linux || solaris
 
 /*
    Copyright The containerd Authors.
