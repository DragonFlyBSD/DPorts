--- vendor/github.com/docker/docker/client/client_unix.go.orig	2021-01-09 22:17:26.550217000 +0100
+++ vendor/github.com/docker/docker/client/client_unix.go	2021-01-09 22:17:33.240260000 +0100
@@ -1,4 +1,4 @@
-// +build linux freebsd openbsd darwin
+// +build linux freebsd openbsd darwin dragonfly
 
 package client // import "github.com/docker/docker/client"
 
