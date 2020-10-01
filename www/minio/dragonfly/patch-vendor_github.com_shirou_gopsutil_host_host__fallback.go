--- vendor/github.com/shirou/gopsutil/host/host_fallback.go.orig	2020-03-14 13:36:25 UTC
+++ vendor/github.com/shirou/gopsutil/host/host_fallback.go
@@ -1,4 +1,4 @@
-// +build !darwin,!linux,!freebsd,!openbsd,!solaris,!windows
+// +build !darwin,!linux,!freebsd,!openbsd,!solaris,!windows,!dragonfly
 
 package host
 
