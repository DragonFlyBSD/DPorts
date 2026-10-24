--- vendor/github.com/u-root/u-root/pkg/ls/fileinfo_unix.go.orig
+++ vendor/github.com/u-root/u-root/pkg/ls/fileinfo_unix.go
@@ -2,7 +2,7 @@
 // Use of this source code is governed by a BSD-style
 // license that can be found in the LICENSE file.
 
-//go:build !plan9 && !windows && !tamago && !linux && !openbsd
+//go:build !plan9 && !windows && !tamago && !linux && !openbsd && !dragonfly
 
 package ls
 
