--- vendor/github.com/hashicorp/consul-template/signals/signals_unix.go.orig	2021-02-23 22:29:46 UTC
+++ vendor/github.com/hashicorp/consul-template/signals/signals_unix.go
@@ -1,4 +1,4 @@
-// +build linux darwin freebsd openbsd solaris netbsd
+// +build linux darwin freebsd openbsd solaris netbsd dragonfly
 
 package signals
 
