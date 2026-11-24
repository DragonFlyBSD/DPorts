--- tun/operateonfd.go.orig
+++ tun/operateonfd.go
@@ -1,4 +1,4 @@
-//go:build darwin || freebsd
+//go:build darwin || freebsd || dragonfly
 
 /* SPDX-License-Identifier: MIT
  *
