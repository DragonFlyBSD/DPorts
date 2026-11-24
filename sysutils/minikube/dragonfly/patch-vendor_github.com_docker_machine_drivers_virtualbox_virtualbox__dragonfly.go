--- vendor/github.com/docker/machine/drivers/virtualbox/virtualbox_dragonfly.go.orig	2026-11-19 15:08:35 UTC
+++ vendor/github.com/docker/machine/drivers/virtualbox/virtualbox_dragonfly.go
@@ -0,0 +1,20 @@
+package virtualbox
+
+import "path/filepath"
+
+func detectVBoxManageCmd() string {
+	return detectVBoxManageCmdInPath()
+}
+
+func getShareDriveAndName() (string, string) {
+	path, err := filepath.EvalSymlinks("/home")
+	if err != nil {
+		path = "/home"
+	}
+
+	return "hosthome", path
+}
+
+func isHyperVInstalled() bool {
+	return false
+}
