--- components/cli/vendor/github.com/containerd/containerd/mount/mount_unix.go.orig	2020-07-16 14:08:57.106412000 +0200
+++ components/cli/vendor/github.com/containerd/containerd/mount/mount_unix.go	2020-07-16 14:09:04.516425000 +0200
@@ -1,4 +1,4 @@
-// +build darwin freebsd
+// +build darwin freebsd dragonfly
 
 /*
    Copyright The containerd Authors.
