--- vendor/github.com/docker/docker/client/client_unix.go.orig	2019-10-21 13:42:55 UTC
+++ vendor/github.com/docker/docker/client/client_unix.go
@@ -1,4 +1,4 @@
-// +build linux freebsd openbsd darwin
+// +build linux freebsd openbsd darwin dragonfly
 
 package client // import "github.com/docker/docker/client"
 
