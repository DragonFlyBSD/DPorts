--- vendor/golang.design/x/clipboard/clipboard_nocgo.go.orig	2026-10-26 05:12:15 UTC
+++ vendor/golang.design/x/clipboard/clipboard_nocgo.go
@@ -1,4 +1,4 @@
-//go:build !darwin && !windows && !linux && !freebsd && !openbsd && !netbsd && !cgo
+//go:build !darwin && !windows && !linux && !freebsd && !dragonfly && !openbsd && !netbsd && !cgo
 
 package clipboard
 
