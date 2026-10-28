--- vendor/github.com/awnumar/memcall/memcall_unix.go.orig	2026-10-26 04:07:23 UTC
+++ vendor/github.com/awnumar/memcall/memcall_unix.go
@@ -1,4 +1,4 @@
-//go:build !windows && !darwin && !openbsd && !freebsd && !aix && !netbsd && !solaris
+//go:build !windows && !darwin && !openbsd && !freebsd && !dragonfly && !aix && !netbsd && !solaris
 
 package memcall
 
