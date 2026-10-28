--- internal/dhcpd/broadcast_bsd.go.orig	2026-10-26 04:47:34 UTC
+++ internal/dhcpd/broadcast_bsd.go
@@ -1,4 +1,4 @@
-//go:build freebsd || openbsd
+//go:build freebsd || openbsd || dragonfly
 
 package dhcpd
 
