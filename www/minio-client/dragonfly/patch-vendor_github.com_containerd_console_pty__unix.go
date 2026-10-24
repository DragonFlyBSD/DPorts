--- vendor/github.com/containerd/console/pty_unix.go.orig	2022-11-10 14:01:31.573094000 +0100
+++ vendor/github.com/containerd/console/pty_unix.go	2022-11-10 14:01:37.482963000 +0100
@@ -1,4 +1,4 @@
-// +build darwin linux netbsd openbsd solaris
+// +build darwin dragonfly linux netbsd openbsd solaris
 
 /*
    Copyright The containerd Authors.
