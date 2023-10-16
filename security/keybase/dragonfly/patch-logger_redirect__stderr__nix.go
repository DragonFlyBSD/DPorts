--- logger/redirect_stderr_nix.go.orig	2023-01-13 18:04:39 UTC
+++ logger/redirect_stderr_nix.go
@@ -1,8 +1,8 @@
 // Copyright 2016 Keybase, Inc. All rights reserved. Use of
 // this source code is governed by the included BSD license.
 
-//go:build darwin || freebsd || netbsd || openbsd
-// +build darwin freebsd netbsd openbsd
+//go:build darwin || freebsd || netbsd || openbsd || dragonfly
+// +build darwin freebsd netbsd openbsd dragonfly
 
 package logger
 
