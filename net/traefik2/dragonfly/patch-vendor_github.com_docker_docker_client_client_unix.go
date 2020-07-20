--- vendor/github.com/docker/docker/client/client_unix.go.orig	2020-07-19 15:11:58.229123000 +0200
+++ vendor/github.com/docker/docker/client/client_unix.go	2020-07-19 15:12:05.219120000 +0200
@@ -1,4 +1,4 @@
-// +build linux freebsd openbsd darwin
+// +build linux freebsd openbsd darwin dragonfly
 
 package client // import "github.com/docker/docker/client"
 
