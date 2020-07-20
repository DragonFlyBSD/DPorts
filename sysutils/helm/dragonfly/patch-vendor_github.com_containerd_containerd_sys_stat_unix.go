--- vendor/github.com/containerd/containerd/sys/stat_unix.go.orig	2020-07-18 17:59:22.638446000 +0200
+++ vendor/github.com/containerd/containerd/sys/stat_unix.go	2020-07-18 17:59:38.728451000 +0200
@@ -1,4 +1,4 @@
-// +build linux solaris
+// +build linux solaris dragonfly
 
 /*
    Copyright The containerd Authors.
