--- vendor/github.com/docker/docker/pkg/term/termios_bsd.go.orig	2020-07-18 18:16:35.048834000 +0200
+++ vendor/github.com/docker/docker/pkg/term/termios_bsd.go	2020-07-18 18:16:48.698806000 +0200
@@ -1,4 +1,4 @@
-// +build darwin freebsd openbsd netbsd
+// +build darwin freebsd openbsd netbsd dragonfly
 
 package term // import "github.com/docker/docker/pkg/term"
 
