--- components/cli/vendor/github.com/docker/docker/pkg/system/syscall_unix.go.orig	2020-07-16 14:52:43.326605000 +0200
+++ components/cli/vendor/github.com/docker/docker/pkg/system/syscall_unix.go	2020-07-16 14:52:56.596630000 +0200
@@ -1,4 +1,4 @@
-// +build linux freebsd
+// +build linux freebsd dragonfly
 
 package system // import "github.com/docker/docker/pkg/system"
 
