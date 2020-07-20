--- vendor/github.com/howeyc/fsnotify/fsnotify_open_bsd.go.orig	2020-07-18 18:45:45.717177000 +0200
+++ vendor/github.com/howeyc/fsnotify/fsnotify_open_bsd.go	2020-07-18 18:46:04.447182000 +0200
@@ -2,7 +2,7 @@
 // Use of this source code is governed by a BSD-style
 // license that can be found in the LICENSE file.
 
-// +build freebsd openbsd netbsd
+// +build freebsd openbsd netbsd dragonfly
 
 package fsnotify
 
