--- vendor/bazil.org/fuse/error_dragonfly.go.orig	2019-07-22 00:17:20 UTC
+++ vendor/bazil.org/fuse/error_dragonfly.go
@@ -0,0 +1,15 @@
+package fuse
+
+import "syscall"
+
+const (
+	ENOATTR = Errno(syscall.ENOATTR)
+)
+
+const (
+	errNoXattr = ENOATTR
+)
+
+func init() {
+	errnoNames[errNoXattr] = "ENOATTR"
+}
