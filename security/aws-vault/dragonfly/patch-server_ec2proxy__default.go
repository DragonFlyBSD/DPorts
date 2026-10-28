--- server/ec2proxy_default.go.orig	2026-10-26 05:25:20 UTC
+++ server/ec2proxy_default.go
@@ -1,5 +1,5 @@
-//go:build !darwin && !freebsd && !openbsd && !linux
-// +build !darwin,!freebsd,!openbsd,!linux
+//go:build !darwin && !dragonfly && !freebsd && !openbsd && !linux
+// +build !darwin,!dragonfly,!freebsd,!openbsd,!linux
 
 package server
 
