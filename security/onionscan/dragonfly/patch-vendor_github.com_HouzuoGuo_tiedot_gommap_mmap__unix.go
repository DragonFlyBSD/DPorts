--- vendor/github.com/HouzuoGuo/tiedot/gommap/mmap_unix.go.orig	2026-10-26 04:59:43 UTC
+++ vendor/github.com/HouzuoGuo/tiedot/gommap/mmap_unix.go
@@ -2,7 +2,7 @@
 // Use of this source code is governed by a BSD-style
 // license that can be found in the LICENSE file.
 
-// +build darwin freebsd linux netbsd openbsd
+// +build darwin dragonfly freebsd linux netbsd openbsd
 
 package gommap
 
