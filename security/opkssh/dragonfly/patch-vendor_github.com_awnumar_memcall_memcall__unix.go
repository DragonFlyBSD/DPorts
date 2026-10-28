--- vendor/github.com/awnumar/memcall/memcall_unix.go.orig	2026-10-26 04:08:20 UTC
+++ vendor/github.com/awnumar/memcall/memcall_unix.go
@@ -1,4 +1,4 @@
-// +build !windows,!darwin,!openbsd,!freebsd
+// +build !windows,!darwin,!openbsd,!freebsd,!dragonfly
 
 package memcall
 
