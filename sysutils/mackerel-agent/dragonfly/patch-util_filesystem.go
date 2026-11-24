--- util/filesystem.go.orig	2026-11-19 14:51:01 UTC
+++ util/filesystem.go
@@ -1,4 +1,4 @@
-//go:build linux || darwin || freebsd || netbsd
+//go:build linux || darwin || dragonfly || freebsd || netbsd
 
 package util
 
