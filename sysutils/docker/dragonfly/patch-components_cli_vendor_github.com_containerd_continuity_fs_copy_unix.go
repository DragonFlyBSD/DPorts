--- components/cli/vendor/github.com/containerd/continuity/fs/copy_unix.go.orig	2020-07-16 12:24:12.799559000 +0200
+++ components/cli/vendor/github.com/containerd/continuity/fs/copy_unix.go	2020-07-16 12:24:30.419574000 +0200
@@ -1,4 +1,4 @@
-// +build solaris darwin freebsd
+// +build solaris darwin freebsd dragonfly
 
 package fs
 
