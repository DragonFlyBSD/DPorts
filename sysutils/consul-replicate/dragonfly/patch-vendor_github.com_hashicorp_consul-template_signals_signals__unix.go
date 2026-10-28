--- vendor/github.com/hashicorp/consul-template/signals/signals_unix.go.orig	2026-10-26 03:59:54 UTC
+++ vendor/github.com/hashicorp/consul-template/signals/signals_unix.go
@@ -1,4 +1,4 @@
-// +build linux darwin freebsd openbsd solaris netbsd
+// +build linux darwin dragonfly freebsd openbsd solaris netbsd
 
 package signals
 
