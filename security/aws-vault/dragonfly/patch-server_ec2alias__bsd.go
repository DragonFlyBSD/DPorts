--- server/ec2alias_bsd.go.orig	2026-10-26 05:25:20 UTC
+++ server/ec2alias_bsd.go
@@ -1,5 +1,5 @@
-//go:build darwin || freebsd || openbsd
-// +build darwin freebsd openbsd
+//go:build darwin || dragonfly || freebsd || openbsd
+// +build darwin dragonfly freebsd openbsd
 
 package server
 
