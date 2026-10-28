--- index/mmap_bsd.go.orig	2026-10-26 04:35:49 UTC
+++ index/mmap_bsd.go
@@ -2,7 +2,7 @@
 // Use of this source code is governed by a BSD-style
 // license that can be found in the LICENSE file.
 
-// +build darwin freebsd openbsd netbsd
+// +build darwin dragonfly freebsd openbsd netbsd
 
 package index
 
