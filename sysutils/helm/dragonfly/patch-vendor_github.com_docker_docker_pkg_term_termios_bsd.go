--- vendor/github.com/docker/docker/pkg/term/termios_bsd.go.orig	2021-06-20 13:04:48.978746000 +0200
+++ vendor/github.com/docker/docker/pkg/term/termios_bsd.go	2021-06-20 13:05:00.678611000 +0200
@@ -1,4 +1,4 @@
-// +build darwin freebsd openbsd
+// +build darwin dragonfly freebsd openbsd
 
 package term
 
