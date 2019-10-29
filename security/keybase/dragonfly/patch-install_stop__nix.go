--- install/stop_nix.go.orig	2019-10-22 18:19:13 UTC
+++ install/stop_nix.go
@@ -1,7 +1,7 @@
 // Copyright 2019 Keybase, Inc. All rights reserved. Use of
 // this source code is governed by the included BSD license.
 
-// +build !windows,!darwin netbsd openbsd freebsd
+// +build !windows,!darwin netbsd openbsd freebsd dragonfly
 
 package install
 
