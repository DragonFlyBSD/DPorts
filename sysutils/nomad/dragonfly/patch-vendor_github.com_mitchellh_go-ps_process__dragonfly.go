--- vendor/github.com/mitchellh/go-ps/process_dragonfly.go.orig
+++ vendor/github.com/mitchellh/go-ps/process_dragonfly.go
@@ -0,0 +1,17 @@
+//go:build dragonfly
+
+package ps
+
+import "errors"
+
+// There is no DragonFly process table reader here. Nomad only calls into
+// this package on Windows; elsewhere it lists processes with gopsutil.
+var errUnsupported = errors.New("go-ps: process listing is not implemented on dragonfly")
+
+func findProcess(pid int) (Process, error) {
+	return nil, errUnsupported
+}
+
+func processes() ([]Process, error) {
+	return nil, errUnsupported
+}
