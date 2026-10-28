--- vendor/golang.design/x/clipboard/clipboard_bsd.go.orig	2026-10-26 05:12:15 UTC
+++ vendor/golang.design/x/clipboard/clipboard_bsd.go
@@ -8,7 +8,7 @@
 // same pure-Go X11 backend and is included on a best-effort basis, but it is
 // not covered by CI and has not been runtime-tested.
 
-//go:build (openbsd || freebsd || netbsd) && !android
+//go:build (openbsd || (freebsd || dragonfly) || netbsd) && !android
 
 package clipboard
 
