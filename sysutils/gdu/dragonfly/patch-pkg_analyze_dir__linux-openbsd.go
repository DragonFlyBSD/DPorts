--- pkg/analyze/dir_linux-openbsd.go.orig	2026-10-26 04:41:11 UTC
+++ pkg/analyze/dir_linux-openbsd.go
@@ -1,4 +1,4 @@
-//go:build linux || openbsd
+//go:build linux || openbsd || dragonfly
 
 package analyze
 
