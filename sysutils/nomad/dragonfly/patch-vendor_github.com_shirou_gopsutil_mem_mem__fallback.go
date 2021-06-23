--- vendor/github.com/shirou/gopsutil/mem/mem_fallback.go.orig	2021-02-23 22:29:46 UTC
+++ vendor/github.com/shirou/gopsutil/mem/mem_fallback.go
@@ -1,4 +1,4 @@
-// +build !darwin,!linux,!freebsd,!openbsd,!solaris,!windows
+// +build !darwin,!linux,!freebsd,!openbsd,!solaris,!windows,!dragonfly
 
 package mem
 
