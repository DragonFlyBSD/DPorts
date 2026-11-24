--- metrics/freebsd/cpuusage.go.orig	2026-11-19 14:51:01 UTC
+++ metrics/freebsd/cpuusage.go
@@ -1,4 +1,4 @@
-//go:build freebsd
+//go:build dragonfly || freebsd
 
 package freebsd
 
