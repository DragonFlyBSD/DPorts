--- src/vendor/golang.org/x/net/route/interface_classic.go.ori	2021-10-23 13:53:01.473807000 +0200
+++ src/vendor/golang.org/x/net/route/interface_classic.go	2021-10-23 13:53:15.283508000 +0200
@@ -2,8 +2,8 @@
 // Use of this source code is governed by a BSD-style
 // license that can be found in the LICENSE file.
 
-//go:build darwin || dragonfly || netbsd
-// +build darwin dragonfly netbsd
+//go:build darwin || netbsd
+// +build darwin netbsd
 
 package route
 
