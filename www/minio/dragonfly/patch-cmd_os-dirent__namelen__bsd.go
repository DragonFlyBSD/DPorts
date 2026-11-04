--- cmd/os-dirent_namelen_bsd.go.orig	2025-10-15 17:29:55 UTC
+++ cmd/os-dirent_namelen_bsd.go
@@ -1,5 +1,5 @@
-//go:build darwin || freebsd || openbsd || netbsd
-// +build darwin freebsd openbsd netbsd
+//go:build darwin || dragonfly || freebsd || openbsd || netbsd
+// +build darwin dragonfly freebsd openbsd netbsd
 
 // Copyright (c) 2015-2021 MinIO, Inc.
 //
