--- ipc/uapi_unix.go.orig
+++ ipc/uapi_unix.go
@@ -1,4 +1,4 @@
-//go:build linux || darwin || freebsd || openbsd
+//go:build linux || darwin || freebsd || openbsd || dragonfly
 
 /* SPDX-License-Identifier: MIT
  *
