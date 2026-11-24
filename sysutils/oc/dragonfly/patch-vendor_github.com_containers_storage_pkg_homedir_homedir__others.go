--- vendor/github.com/containers/storage/pkg/homedir/homedir_others.go.orig	2021-09-02 00:37:38 UTC
+++ vendor/github.com/containers/storage/pkg/homedir/homedir_others.go
@@ -1,4 +1,4 @@
-// +build !linux,!darwin,!freebsd
+// +build !linux,!darwin,!freebsd,!dragonfly
 
 package homedir
 
