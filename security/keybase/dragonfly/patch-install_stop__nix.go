--- install/stop_nix.go.orig	2023-01-13 18:04:39 UTC
+++ install/stop_nix.go
@@ -1,8 +1,8 @@
 // Copyright 2019 Keybase, Inc. All rights reserved. Use of
 // this source code is governed by the included BSD license.
 
-//go:build (!windows && !darwin) || netbsd || openbsd || freebsd
-// +build !windows,!darwin netbsd openbsd freebsd
+//go:build (!windows && !darwin) || netbsd || openbsd || freebsd || dragonfly
+// +build !windows,!darwin netbsd openbsd freebsd dragonfly
 
 package install
 
