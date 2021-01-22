--- internal/restic/node_dragonfly.go.orig	1970-01-01 01:00:00.000000000 +0100
+++ internal/restic/node_dragonfly.go	2021-01-20 18:59:23.226255000 +0100
@@ -0,0 +1,17 @@
+// +build dragonfly
+
+package restic
+
+import "syscall"
+
+func (node Node) restoreSymlinkTimestamps(path string, utimes [2]syscall.Timespec) error {
+	return nil
+}
+
+func (node Node) device() int {
+	return int(node.Device)
+}
+
+func (s statUnix) atim() syscall.Timespec { return s.Atim }
+func (s statUnix) mtim() syscall.Timespec { return s.Mtim }
+func (s statUnix) ctim() syscall.Timespec { return s.Ctim }
