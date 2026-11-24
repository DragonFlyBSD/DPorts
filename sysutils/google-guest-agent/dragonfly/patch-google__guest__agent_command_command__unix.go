--- google_guest_agent/command/command_unix.go.orig	2026-07-23 22:27:58 UTC
+++ google_guest_agent/command/command_unix.go
@@ -1,4 +1,4 @@
-//go:build linux || freebsd
+//go:build dragonfly || linux || freebsd
 
 // Copyright 2026 Google Inc. All Rights Reserved.
 //
