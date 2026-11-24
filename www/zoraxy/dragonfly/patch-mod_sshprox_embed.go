--- mod/sshprox/embed.go.orig	2026-11-19 14:54:03 UTC
+++ mod/sshprox/embed.go
@@ -1,5 +1,5 @@
-//go:build (linux && mipsle) || (linux && riscv64) || freebsd || (darwin && arm64)
-// +build linux,mipsle linux,riscv64 freebsd darwin,arm64
+//go:build (linux && mipsle) || (linux && riscv64) || dragonfly || freebsd || (darwin && arm64)
+// +build linux,mipsle linux,riscv64 dragonfly freebsd darwin,arm64
 
 package sshprox
 
