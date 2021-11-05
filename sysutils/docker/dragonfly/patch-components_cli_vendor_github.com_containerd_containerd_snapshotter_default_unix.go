--- components/cli/vendor/github.com/containerd/containerd/snapshotter_default_unix.go.orig	2020-07-16 16:20:16.764918000 +0200
+++ components/cli/vendor/github.com/containerd/containerd/snapshotter_default_unix.go	2020-07-16 16:20:30.234942000 +0200
@@ -1,4 +1,4 @@
-// +build darwin freebsd solaris
+// +build darwin freebsd solaris dragonfly
 
 /*
    Copyright The containerd Authors.
