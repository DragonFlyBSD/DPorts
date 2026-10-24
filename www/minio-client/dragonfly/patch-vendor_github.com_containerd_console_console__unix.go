--- vendor/github.com/containerd/console/console_unix.go.orig	2022-11-10 13:56:09.090250000 +0100
+++ vendor/github.com/containerd/console/console_unix.go	2022-11-10 13:56:14.470131000 +0100
@@ -1,4 +1,4 @@
-// +build darwin freebsd linux netbsd openbsd solaris
+// +build darwin dragonfly freebsd linux netbsd openbsd solaris
 
 /*
    Copyright The containerd Authors.
