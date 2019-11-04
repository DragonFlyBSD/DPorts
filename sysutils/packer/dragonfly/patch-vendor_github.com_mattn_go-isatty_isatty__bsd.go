--- vendor/github.com/mattn/go-isatty/isatty_bsd.go.orig	2018-02-22 23:27:15 UTC
+++ vendor/github.com/mattn/go-isatty/isatty_bsd.go
@@ -1,4 +1,4 @@
-// +build darwin freebsd openbsd netbsd
+// +build darwin freebsd dragonfly openbsd netbsd
 // +build !appengine
 
 package isatty
