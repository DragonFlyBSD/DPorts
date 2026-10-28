--- cmd/incus/utils_notwindows.go.orig	2026-10-26 05:15:33 UTC
+++ cmd/incus/utils_notwindows.go
@@ -1,4 +1,4 @@
-//go:build (linux && !appengine) || darwin || freebsd || openbsd
+//go:build (linux && !appengine) || darwin || (freebsd || dragonfly) || openbsd
 
 package main
 
