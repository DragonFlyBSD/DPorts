--- drivers/virtualbox/virtualbox_dragonfly.go.orig	1970-01-01 01:00:00.000000000 +0100
+++ drivers/virtualbox/virtualbox_dragonfly.go	2020-07-16 19:39:24.236970000 +0200
@@ -0,0 +1,13 @@
+package virtualbox
+
+func detectVBoxManageCmd() string {
+	return detectVBoxManageCmdInPath()
+}
+
+func getShareDriveAndName() (string, string) {
+	return "hosthome", "/home"
+}
+
+func isHyperVInstalled() bool {
+	return false
+}
