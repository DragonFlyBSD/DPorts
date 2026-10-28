--- commands/readhome.go.orig	2026-10-26 04:11:56 UTC
+++ commands/readhome.go
@@ -14,7 +14,7 @@
 //
 // SPDX-License-Identifier: Apache-2.0
 
-//go:build linux || darwin || freebsd
+//go:build linux || darwin || freebsd || dragonfly
 
 package commands
 
