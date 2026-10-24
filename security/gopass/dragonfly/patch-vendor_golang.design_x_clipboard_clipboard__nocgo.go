--- vendor/golang.design/x/clipboard/clipboard_nocgo.go.orig
+++ vendor/golang.design/x/clipboard/clipboard_nocgo.go
@@ -1,4 +1,4 @@
-//go:build !darwin && !windows && !linux && !freebsd && !openbsd && !netbsd && !js && !cgo
+//go:build !darwin && !windows && !linux && !freebsd && !openbsd && !netbsd && !dragonfly && !js && !cgo
 
 package clipboard
 
