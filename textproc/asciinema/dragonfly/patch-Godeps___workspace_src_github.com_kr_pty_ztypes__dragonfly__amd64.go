--- /dev/null	2016-05-20 14:21:28 UTC
+++ Godeps/_workspace/src/github.com/kr/pty/ztypes_dragonfly_amd64.go
@@ -0,0 +1,14 @@
+// Created by cgo -godefs - DO NOT EDIT
+// cgo -godefs types_dragonfly.go
+
+package pty
+
+const (
+	_C_SPECNAMELEN = 0x3f
+)
+
+type fiodgnameArg struct {
+	Name      *byte
+	Len       uint32
+	Pad_cgo_0 [4]byte
+}
