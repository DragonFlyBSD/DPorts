--- vendor/github.com/howeyc/fsnotify/fsnotify_bsd.go.orig	2020-07-18 18:42:21.227101000 +0200
+++ vendor/github.com/howeyc/fsnotify/fsnotify_bsd.go	2020-07-18 18:42:46.897310000 +0200
@@ -2,7 +2,7 @@
 // Use of this source code is governed by a BSD-style
 // license that can be found in the LICENSE file.
 
-// +build freebsd openbsd netbsd darwin
+// +build freebsd openbsd netbsd darwin dragonfly
 
 package fsnotify
 
