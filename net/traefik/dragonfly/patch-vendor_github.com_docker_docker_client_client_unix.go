--- vendor/github.com/docker/docker/client/client_unix.go.orig	2020-07-19 14:22:42.028445000 +0200
+++ vendor/github.com/docker/docker/client/client_unix.go	2020-07-19 14:22:48.268845000 +0200
@@ -1,4 +1,4 @@
-// +build linux freebsd solaris openbsd darwin
+// +build linux freebsd solaris openbsd darwin dragonfly
 
 package client
 
