--- components/cli/vendor/github.com/docker/docker/client/client_unix.go.orig	2020-07-16 14:15:30.847014000 +0200
+++ components/cli/vendor/github.com/docker/docker/client/client_unix.go	2020-07-16 14:15:51.837047000 +0200
@@ -1,4 +1,4 @@
-// +build linux freebsd openbsd darwin
+// +build linux freebsd openbsd darwin dragonfly
 
 package client // import "github.com/docker/docker/client"
 
