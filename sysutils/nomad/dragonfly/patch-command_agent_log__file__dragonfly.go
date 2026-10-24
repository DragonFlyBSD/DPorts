--- command/agent/log_file_dragonfly.go.orig
+++ command/agent/log_file_dragonfly.go
@@ -0,0 +1,20 @@
+// Copyright (c) HashiCorp, Inc.
+// SPDX-License-Identifier: BUSL-1.1
+
+//go:build dragonfly
+// +build dragonfly
+
+package agent
+
+import (
+	"os"
+	"syscall"
+	"time"
+)
+
+func (l *logFile) createTime(stat os.FileInfo) time.Time {
+	stat_t := stat.Sys().(*syscall.Stat_t)
+	createTime := stat_t.Ctim
+	// Sec and Nsec are int32 in 32-bit architectures.
+	return time.Unix(int64(createTime.Sec), int64(createTime.Nsec)) //nolint:unconvert
+}
