--- cmd/os-dirent_fileino.go.orig	2025-10-15 17:29:55 UTC
+++ cmd/os-dirent_fileino.go
@@ -1,5 +1,5 @@
-//go:build freebsd || openbsd || netbsd
-// +build freebsd openbsd netbsd
+//go:build dragonfly || freebsd || openbsd || netbsd
+// +build dragonfly freebsd openbsd netbsd
 
 // Copyright (c) 2015-2021 MinIO, Inc.
 //
