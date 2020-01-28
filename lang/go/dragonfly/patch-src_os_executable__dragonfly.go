--- src/os/executable_dragonfly.go.orig	2020-01-28 23:17:17 UTC
+++ src/os/executable_dragonfly.go
@@ -0,0 +1,12 @@
+// Copyright 2020 The Go Authors. All rights reserved.
+// Use of this source code is governed by a BSD-style
+// license that can be found in the LICENSE file.
+
+package os
+
+// From DragonFly's <sys/sysctl.h>
+const (
+        _CTL_KERN           = 1
+        _KERN_PROC          = 14
+        _KERN_PROC_PATHNAME = 9
+)
