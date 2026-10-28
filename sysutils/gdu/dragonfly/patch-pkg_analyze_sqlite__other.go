--- pkg/analyze/sqlite_other.go.orig	2026-10-26 04:41:11 UTC
+++ pkg/analyze/sqlite_other.go
@@ -1,4 +1,4 @@
-//go:build (linux && (mips64 || mipsle || mips || mips64le || ppc64)) || (freebsd && (arm || 386)) || (openbsd && 386) || (netbsd && (arm || 386 || amd64))
+//go:build (linux && (mips64 || mipsle || mips || mips64le || ppc64)) || (freebsd && (arm || 386)) || (openbsd && 386) || (netbsd && (arm || 386 || amd64)) || dragonfly
 
 package analyze
 
