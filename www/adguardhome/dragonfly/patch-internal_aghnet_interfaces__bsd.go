--- internal/aghnet/interfaces_bsd.go.orig	2026-10-26 04:47:34 UTC
+++ internal/aghnet/interfaces_bsd.go
@@ -1,4 +1,4 @@
-//go:build darwin || freebsd || openbsd
+//go:build darwin || freebsd || openbsd || dragonfly
 
 package aghnet
 
