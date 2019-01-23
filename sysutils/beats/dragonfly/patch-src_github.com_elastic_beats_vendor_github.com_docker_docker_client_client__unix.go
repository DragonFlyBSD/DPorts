--- ../src/github.com/elastic/beats/vendor/github.com/docker/docker/client/client_unix.go.orig	2018-12-23 01:44:01.707915000 +0100
+++ ../src/github.com/elastic/beats/vendor/github.com/docker/docker/client/client_unix.go	2018-12-23 01:44:07.488020000 +0100
@@ -1,4 +1,4 @@
-// +build linux freebsd solaris openbsd darwin netbsd
+// +build linux dragonfly freebsd solaris openbsd darwin netbsd
 
 package client
 
