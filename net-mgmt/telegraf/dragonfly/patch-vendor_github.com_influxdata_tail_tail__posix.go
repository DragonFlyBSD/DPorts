--- vendor/github.com/influxdata/tail/tail_posix.go.orig	2026-11-19 14:31:43 UTC
+++ vendor/github.com/influxdata/tail/tail_posix.go
@@ -1,4 +1,4 @@
-// +build linux darwin freebsd netbsd openbsd
+// +build linux darwin dragonfly freebsd netbsd openbsd
 
 package tail
 
