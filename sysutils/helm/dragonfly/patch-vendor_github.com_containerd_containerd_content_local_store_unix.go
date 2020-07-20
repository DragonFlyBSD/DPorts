--- vendor/github.com/containerd/containerd/content/local/store_unix.go.orig	2020-07-18 17:47:09.278190000 +0200
+++ vendor/github.com/containerd/containerd/content/local/store_unix.go	2020-07-18 17:47:35.168208000 +0200
@@ -1,4 +1,4 @@
-// +build linux solaris darwin freebsd
+// +build linux solaris darwin freebsd dragonfly
 
 /*
    Copyright The containerd Authors.
