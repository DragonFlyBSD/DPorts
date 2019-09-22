--- vendor/github.com/mattn/go-isatty/isatty_bsd.go.orig	2019-07-10 18:10:08 UTC
+++ vendor/github.com/mattn/go-isatty/isatty_bsd.go
@@ -1,4 +1,4 @@
-// +build darwin freebsd openbsd netbsd
+// +build darwin freebsd openbsd netbsd dragonfly
 // +build !appengine
 
 package isatty
