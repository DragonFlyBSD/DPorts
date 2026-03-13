--- src/vendor/golang.org/x/net/route/interface_classic.go.orig	2024-06-27 20:11:12 UTC
+++ src/vendor/golang.org/x/net/route/interface_classic.go
@@ -2,7 +2,7 @@
 // Use of this source code is governed by a BSD-style
 // license that can be found in the LICENSE file.
 
-//go:build darwin || dragonfly || netbsd
+//go:build darwin || netbsd
 
 package route
 
