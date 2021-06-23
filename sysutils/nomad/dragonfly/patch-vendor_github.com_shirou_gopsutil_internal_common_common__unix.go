--- vendor/github.com/shirou/gopsutil/internal/common/common_unix.go.orig	2021-02-23 22:29:46 UTC
+++ vendor/github.com/shirou/gopsutil/internal/common/common_unix.go
@@ -1,4 +1,4 @@
-// +build linux freebsd darwin openbsd
+// +build linux freebsd darwin openbsd dragonfly
 
 package common
 
