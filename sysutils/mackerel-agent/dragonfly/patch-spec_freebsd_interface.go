--- spec/freebsd/interface.go.orig	2026-11-19 14:51:01 UTC
+++ spec/freebsd/interface.go
@@ -1,4 +1,4 @@
-//go:build freebsd
+//go:build dragonfly || freebsd
 
 package freebsd
 
