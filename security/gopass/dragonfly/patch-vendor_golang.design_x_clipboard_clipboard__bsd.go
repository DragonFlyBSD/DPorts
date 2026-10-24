--- vendor/golang.design/x/clipboard/clipboard_bsd.go.orig
+++ vendor/golang.design/x/clipboard/clipboard_bsd.go
@@ -9,7 +9,7 @@
 // shares the same pure-Go backends and is included on a best-effort basis, but
 // it is not covered by CI and has not been runtime-tested.
 
-//go:build (openbsd || freebsd || netbsd) && !android
+//go:build (openbsd || freebsd || netbsd || dragonfly) && !android
 
 package clipboard
 
