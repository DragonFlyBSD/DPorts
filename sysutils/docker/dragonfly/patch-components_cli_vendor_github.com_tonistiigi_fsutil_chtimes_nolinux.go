--- components/cli/vendor/github.com/tonistiigi/fsutil/chtimes_nolinux.go.orig	2020-07-16 15:23:28.799463000 +0200
+++ components/cli/vendor/github.com/tonistiigi/fsutil/chtimes_nolinux.go	2020-07-16 15:23:44.099488000 +0200
@@ -1,4 +1,4 @@
-// +build !linux,!freebsd
+// +build !linux,!freebsd,!dragonfly
 
 package fsutil
 
