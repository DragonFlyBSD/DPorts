--- kbfs/stderrutils/dup_stderr_nix.go.orig	2023-01-13 18:04:39 UTC
+++ kbfs/stderrutils/dup_stderr_nix.go
@@ -1,8 +1,8 @@
 // Copyright 2017 Keybase, Inc. All rights reserved. Use of
 // this source code is governed by the included BSD license.
 
-//go:build linux || android || darwin || freebsd || openbsd
-// +build linux android darwin freebsd openbsd
+//go:build linux || android || darwin || freebsd || openbsd || dragonfly
+// +build linux android darwin freebsd openbsd dragonfly
 
 package stderrutils
 
