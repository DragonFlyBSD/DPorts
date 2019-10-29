--- logger/redirect_stderr_nix.go.orig	2019-10-22 18:19:13 UTC
+++ logger/redirect_stderr_nix.go
@@ -1,7 +1,7 @@
 // Copyright 2016 Keybase, Inc. All rights reserved. Use of
 // this source code is governed by the included BSD license.
 
-// +build darwin freebsd netbsd openbsd
+// +build darwin freebsd netbsd openbsd dragonfly
 
 package logger
 
