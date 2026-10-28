--- vendor/github.com/mattn/go-isatty/isatty_bsd.go.orig	2026-10-26 04:31:50 UTC
+++ vendor/github.com/mattn/go-isatty/isatty_bsd.go
@@ -1,4 +1,4 @@
-// +build darwin freebsd openbsd netbsd
+// +build darwin dragonfly freebsd openbsd netbsd
 // +build !appengine
 
 package isatty
