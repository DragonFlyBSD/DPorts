--- components/cli/vendor/github.com/containerd/continuity/sysx/xattr_dragonfly.go.orig	1970-01-01 01:00:00.000000000 +0100
+++ components/cli/vendor/github.com/containerd/continuity/sysx/xattr_dragonfly.go	2020-07-16 15:20:25.769177000 +0200
@@ -0,0 +1,12 @@
+package sysx
+
+import (
+	"errors"
+)
+
+// Initial stub version for FreeBSD. FreeBSD has a different
+// syscall API from Darwin and Linux for extended attributes;
+// it is also not widely used. It is not exposed at all by the
+// Go syscall package, so we need to implement directly eventually.
+
+var unsupported = errors.New("extended attributes unsupported on DragonFlyBSD")
