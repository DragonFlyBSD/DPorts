--- internal/arpdb/arpdb_bsd.go.orig	2026-10-26 04:47:34 UTC
+++ internal/arpdb/arpdb_bsd.go
@@ -1,4 +1,4 @@
-//go:build darwin || freebsd
+//go:build darwin || freebsd || dragonfly
 
 package arpdb
 
