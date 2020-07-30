--- cmd/vendor/github.com/bgentry/speakeasy/speakeasy_unix.go.orig	2020-07-28 12:45:53.547947000 +0200
+++ cmd/vendor/github.com/bgentry/speakeasy/speakeasy_unix.go	2020-07-28 12:46:04.307969000 +0200
@@ -4,7 +4,7 @@
 // Original code is based on code by RogerV in the golang-nuts thread:
 // https://groups.google.com/group/golang-nuts/browse_thread/thread/40cc41e9d9fc9247
 
-// +build darwin freebsd linux netbsd openbsd solaris
+// +build darwin freebsd linux netbsd openbsd solaris dragonfly
 
 package speakeasy
 
