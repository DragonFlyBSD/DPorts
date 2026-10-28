--- pkg/device/dev_freebsd_darwin_other.go.orig	2026-10-26 04:41:11 UTC
+++ pkg/device/dev_freebsd_darwin_other.go
@@ -1,4 +1,4 @@
-//go:build freebsd || darwin
+//go:build freebsd || darwin || dragonfly
 
 package device
 
