--- logging/logfile_dragonfly.go.orig	1970-01-01 00:00:00 UTC
+++ logging/logfile_dragonfly.go
@@ -0,0 +1,18 @@
+// Copyright IBM Corp. 2024, 2026
+// SPDX-License-Identifier: BUSL-1.1
+
+//go:build dragonfly
+
+package logging
+
+import (
+	"os"
+	"syscall"
+	"time"
+)
+
+func (l *LogFile) createTime(stat os.FileInfo) time.Time {
+	stat_t := stat.Sys().(*syscall.Stat_t)
+	createTime := stat_t.Ctim
+	return time.Unix(int64(createTime.Sec), int64(createTime.Nsec)) //nolint:unconvert
+}
