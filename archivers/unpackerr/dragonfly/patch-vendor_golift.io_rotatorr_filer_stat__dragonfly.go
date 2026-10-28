--- vendor/golift.io/rotatorr/filer/stat_dragonfly.go.orig	2026-10-26 05:10:04 UTC
+++ vendor/golift.io/rotatorr/filer/stat_dragonfly.go
@@ -0,0 +1,23 @@
+package filer
+
+import (
+	"fmt"
+	"os"
+	"syscall"
+	"time"
+)
+
+// Stat returns a *FileInfo struct w/ attached os.FileInfo interface.
+func Stat(filename string) (*FileInfo, error) {
+	fileStat, err := os.Stat(filename)
+	if err != nil {
+		return nil, fmt.Errorf("stat err: %w", err)
+	}
+
+	fileinfo, _ := fileStat.Sys().(*syscall.Stat_t)
+
+	return &FileInfo{
+		FileInfo:   fileStat,
+		CreateTime: time.Unix(int64(fileinfo.Ctim.Sec), int64(fileinfo.Ctim.Nsec)), //nolint:unconvert
+	}, nil
+}
