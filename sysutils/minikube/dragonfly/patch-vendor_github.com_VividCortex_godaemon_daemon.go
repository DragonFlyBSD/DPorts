--- vendor/github.com/VividCortex/godaemon/daemon.go.orig	2026-11-19 15:08:32 UTC
+++ vendor/github.com/VividCortex/godaemon/daemon.go
@@ -1,4 +1,4 @@
-// +build darwin freebsd linux
+// +build darwin dragonfly freebsd linux
 
 // Package godaemon runs a program as a Unix daemon.
 package godaemon
