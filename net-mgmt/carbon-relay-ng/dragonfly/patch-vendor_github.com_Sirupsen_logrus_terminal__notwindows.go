--- vendor/github.com/Sirupsen/logrus/terminal_notwindows.go.orig	2026-10-26 04:26:55 UTC
+++ vendor/github.com/Sirupsen/logrus/terminal_notwindows.go
@@ -3,7 +3,7 @@
 // Use of this source code is governed by a BSD-style
 // license that can be found in the LICENSE file.
 
-// +build linux darwin freebsd openbsd
+// +build linux darwin dragonfly freebsd openbsd
 
 package logrus
 
