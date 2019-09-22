--- kbfs/stderrutils/dup_stderr_nix.go.orig	2019-07-10 18:10:08 UTC
+++ kbfs/stderrutils/dup_stderr_nix.go
@@ -1,7 +1,7 @@
 // Copyright 2017 Keybase, Inc. All rights reserved. Use of
 // this source code is governed by the included BSD license.
 
-// +build linux android darwin freebsd openbsd
+// +build linux android darwin freebsd openbsd dragonfly
 
 package stderrutils
 
