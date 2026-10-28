--- vendor/github.com/AdguardTeam/dnsproxy/upstream/dot_unix.go.orig	2026-10-26 04:47:34 UTC
+++ vendor/github.com/AdguardTeam/dnsproxy/upstream/dot_unix.go
@@ -1,4 +1,4 @@
-//go:build darwin || freebsd || linux || openbsd || netbsd
+//go:build darwin || freebsd || linux || openbsd || netbsd || dragonfly
 
 package upstream
 
