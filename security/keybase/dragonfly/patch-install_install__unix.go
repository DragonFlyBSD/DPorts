--- install/install_unix.go.orig	2023-01-13 18:04:39 UTC
+++ install/install_unix.go
@@ -1,8 +1,8 @@
 // Copyright 2015 Keybase, Inc. All rights reserved. Use of
 // this source code is governed by the included BSD license.
 
-//go:build linux || freebsd || netbsd || openbsd
-// +build linux freebsd netbsd openbsd
+//go:build linux || freebsd || netbsd || openbsd || dragonfly
+// +build linux freebsd netbsd openbsd dragonfly
 
 package install
 
