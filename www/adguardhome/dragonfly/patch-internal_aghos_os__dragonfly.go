--- internal/aghos/os_dragonfly.go.orig	2026-10-26 04:47:34 UTC
+++ internal/aghos/os_dragonfly.go
@@ -0,0 +1,24 @@
+//go:build dragonfly
+
+package aghos
+
+import (
+	"os"
+	"syscall"
+)
+
+func setRlimit(val uint64) (err error) {
+	var rlim syscall.Rlimit
+	rlim.Max = int64(val)
+	rlim.Cur = int64(val)
+
+	return syscall.Setrlimit(syscall.RLIMIT_NOFILE, &rlim)
+}
+
+func haveAdminRights() (bool, error) {
+	return os.Getuid() == 0, nil
+}
+
+func isOpenWrt() (ok bool) {
+	return false
+}
