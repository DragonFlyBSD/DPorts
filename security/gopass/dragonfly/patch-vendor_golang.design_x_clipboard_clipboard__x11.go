--- vendor/golang.design/x/clipboard/clipboard_x11.go.orig
+++ vendor/golang.design/x/clipboard/clipboard_x11.go
@@ -4,7 +4,7 @@
 //
 // Written by Changkun Ou <changkun.de>
 
-//go:build (linux || freebsd || openbsd || netbsd) && !android
+//go:build (linux || freebsd || openbsd || netbsd || dragonfly) && !android
 
 package clipboard
 
