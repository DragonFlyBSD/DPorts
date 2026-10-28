--- filesystems_dragonfly.go.orig	2026-10-26 04:37:53 UTC
+++ filesystems_dragonfly.go
@@ -0,0 +1,37 @@
+//go:build dragonfly
+// +build dragonfly
+
+package main
+
+func isFuseFs(m Mount) bool {
+	//FIXME: implement
+	return false
+}
+
+func isNetworkFs(m Mount) bool {
+	fs := []string{"nfs", "smbfs"}
+
+	for _, v := range fs {
+		if m.Fstype == v {
+			return true
+		}
+	}
+
+	return false
+}
+
+func isSpecialFs(m Mount) bool {
+	fs := []string{"devfs", "tmpfs", "procfs", "fdescfs", "null"}
+
+	for _, v := range fs {
+		if m.Fstype == v {
+			return true
+		}
+	}
+
+	return false
+}
+
+func isHiddenFs(m Mount) bool {
+	return false
+}
