--- internal/aghnet/net_unix.go.orig	2026-10-26 04:47:34 UTC
+++ internal/aghnet/net_unix.go
@@ -1,4 +1,4 @@
-//go:build darwin || freebsd || linux || openbsd
+//go:build darwin || freebsd || linux || openbsd || dragonfly
 
 package aghnet
 
