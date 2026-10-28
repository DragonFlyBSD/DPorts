--- vendor/github.com/gookit/goutil/sysutil/sysutil_dragonfly.go.orig	2026-10-26 04:34:08 UTC
+++ vendor/github.com/gookit/goutil/sysutil/sysutil_dragonfly.go
@@ -0,0 +1,40 @@
+//go:build dragonfly
+
+package sysutil
+
+import (
+	"os/exec"
+	"strings"
+)
+
+// OsName system name. like runtime.GOOS.
+const OsName = "dragonfly"
+
+// IsWin system. linux windows darwin
+func IsWin() bool { return false }
+
+// IsWindows system. linux windows darwin
+func IsWindows() bool { return false }
+
+// IsMac system
+func IsMac() bool { return false }
+
+// IsDarwin system
+func IsDarwin() bool { return false }
+
+// IsLinux system
+func IsLinux() bool { return false }
+
+// openBins are tried in order to open a URL, as on Linux.
+var openBins = []string{"xdg-open", "x-www-browser", "www-browser"}
+
+// OpenURL Open file or browser URL
+func OpenURL(URL string) error {
+	for _, bin := range openBins {
+		if _, err := exec.LookPath(bin); err == nil {
+			return exec.Command(bin, URL).Run()
+		}
+	}
+
+	return &exec.Error{Name: strings.Join(openBins, ","), Err: exec.ErrNotFound}
+}
