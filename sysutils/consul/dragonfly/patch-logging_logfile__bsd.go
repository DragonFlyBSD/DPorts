--- logging/logfile_bsd.go.orig	Wed Mar 12 20:27:26 2025
+++ logging/logfile_bsd.go	Wed Mar 12 20:27:43 2025
@@ -1,7 +1,7 @@
 // Copyright (c) HashiCorp, Inc.
 // SPDX-License-Identifier: BUSL-1.1
 
-//go:build darwin || freebsd || netbsd || openbsd
+//go:build darwin || freebsd || netbsd || openbsd || dragonfly
 
 package logging
 
@@ -13,6 +13,6 @@ import (
 
 func (l *LogFile) createTime(stat os.FileInfo) time.Time {
 	stat_t := stat.Sys().(*syscall.Stat_t)
-	createTime := stat_t.Ctimespec
+	createTime := stat_t.Ctim
 	return time.Unix(int64(createTime.Sec), int64(createTime.Nsec)) //nolint:unconvert
 }
