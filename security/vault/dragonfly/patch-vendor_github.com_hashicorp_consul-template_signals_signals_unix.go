--- vendor/github.com/hashicorp/consul-template/signals/signals_unix.go.orig	2020-07-17 17:31:15.097111000 +0200
+++ vendor/github.com/hashicorp/consul-template/signals/signals_unix.go	2020-07-17 17:31:28.897134000 +0200
@@ -1,4 +1,4 @@
-// +build linux darwin freebsd openbsd solaris netbsd
+// +build linux darwin freebsd openbsd solaris netbsd dragonfly
 
 package signals
 
