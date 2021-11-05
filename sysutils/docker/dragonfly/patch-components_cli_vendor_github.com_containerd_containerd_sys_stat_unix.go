--- components/cli/vendor/github.com/containerd/containerd/sys/stat_unix.go.orig	2020-07-16 12:24:19.289765000 +0200
+++ components/cli/vendor/github.com/containerd/containerd/sys/stat_unix.go	2020-07-16 12:25:56.939745000 +0200
@@ -1,4 +1,4 @@
-// +build linux solaris
+// +build linux solaris dragonfly
 
 /*
    Copyright The containerd Authors.
