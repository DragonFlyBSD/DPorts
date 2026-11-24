--- metrics/freebsd/memory.go.orig	2026-11-19 14:51:01 UTC
+++ metrics/freebsd/memory.go
@@ -1,4 +1,4 @@
-//go:build freebsd
+//go:build dragonfly || freebsd
 
 package freebsd
 
@@ -38,7 +38,7 @@
 			continue
 		}
 
-		if fields[0] == "Mem:" {
+		if fields[0] == "Mem:" || fields[0] == "Memory:" {
 			for i := 1; i < len(fields); i += 2 {
 				v, err := getValue(fields[i])
 				if err == nil {
