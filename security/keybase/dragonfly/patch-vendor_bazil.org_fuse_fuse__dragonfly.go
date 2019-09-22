--- vendor/bazil.org/fuse/fuse_dragonfly.go.orig	2019-07-22 00:20:16 UTC
+++ vendor/bazil.org/fuse/fuse_dragonfly.go
@@ -0,0 +1,6 @@
+package fuse
+
+// Maximum file write size we are prepared to receive from the kernel.
+//
+// This number is just a guess.
+const maxWrite = 128 * 1024
