--- client/platform_specific_ctl_commands_other.go.orig	2023-01-13 18:04:39 UTC
+++ client/platform_specific_ctl_commands_other.go
@@ -1,7 +1,7 @@
 // Copyright 2019 Keybase, Inc. All rights reserved. Use of
 // this source code is governed by the included BSD license.
-//go:build darwin || netbsd || openbsd || freebsd
-// +build darwin netbsd openbsd freebsd
+//go:build darwin || netbsd || openbsd || freebsd || dragonfly
+// +build darwin netbsd openbsd freebsd dragonfly
 
 package client
 
