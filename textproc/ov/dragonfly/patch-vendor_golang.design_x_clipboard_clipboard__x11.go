--- vendor/golang.design/x/clipboard/clipboard_x11.go.orig	2026-10-26 05:12:15 UTC
+++ vendor/golang.design/x/clipboard/clipboard_x11.go
@@ -4,7 +4,7 @@
 //
 // Written by Changkun Ou <changkun.de>
 
-//go:build (linux || freebsd || openbsd || netbsd) && !android
+//go:build (linux || (freebsd || dragonfly) || openbsd || netbsd) && !android
 
 package clipboard
 
