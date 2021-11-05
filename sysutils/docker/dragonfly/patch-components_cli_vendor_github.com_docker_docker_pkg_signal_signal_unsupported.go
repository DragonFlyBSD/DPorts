--- components/cli/vendor/github.com/docker/docker/pkg/signal/signal_unsupported.go.orig	2020-07-16 15:07:43.927995000 +0200
+++ components/cli/vendor/github.com/docker/docker/pkg/signal/signal_unsupported.go	2020-07-16 15:07:56.837999000 +0200
@@ -1,4 +1,4 @@
-// +build !linux,!darwin,!freebsd,!windows
+// +build !linux,!darwin,!freebsd,!windows,!dragonfly
 
 package signal // import "github.com/docker/docker/pkg/signal"
 
