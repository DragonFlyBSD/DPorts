--- vendor/github.com/awnumar/memcall/memcall_unix.go.orig	2026-11-19 14:31:30 UTC
+++ vendor/github.com/awnumar/memcall/memcall_unix.go
@@ -1,4 +1,4 @@
-//go:build !windows && !darwin && !openbsd && !freebsd && !aix && !netbsd && !solaris
+//go:build !windows && !darwin && !dragonfly && !openbsd && !freebsd && !aix && !netbsd && !solaris
 
 package memcall
 
