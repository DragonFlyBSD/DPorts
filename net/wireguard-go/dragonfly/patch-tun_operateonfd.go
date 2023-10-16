--- tun/operateonfd.go.orig	2022-03-17 03:32:14 UTC
+++ tun/operateonfd.go
@@ -1,4 +1,4 @@
-//go:build darwin || freebsd
+//go:build darwin || freebsd || dragonfly
 
 /* SPDX-License-Identifier: MIT
  *
