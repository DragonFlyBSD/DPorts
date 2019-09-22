--- logger/redirect_stderr_nix.go.orig	2019-07-10 18:10:08 UTC
+++ logger/redirect_stderr_nix.go
@@ -1,7 +1,7 @@
 // Copyright 2016 Keybase, Inc. All rights reserved. Use of
 // this source code is governed by the included BSD license.
 
-// +build darwin freebsd openbsd
+// +build darwin freebsd openbsd dragonfly
 
 package logger
 
