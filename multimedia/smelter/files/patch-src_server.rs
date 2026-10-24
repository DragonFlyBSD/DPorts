-- Enable FreeBSD to use the same parent-process termination watcher as macOS.
-- The upstream code only provides implementations for Linux and macOS, causing
-- an unresolved symbol error on FreeBSD.
--
--- src/server.rs.orig	2026-07-07 22:38:55 UTC
+++ src/server.rs
@@ -102,7 +102,7 @@ fn listen_for_parent_termination() {
     }
 }
 
-#[cfg(target_os = "macos")]
+#[cfg(any(target_os = "macos", target_os = "freebsd"))]
 fn listen_for_parent_termination() {
     use libc::SIGTERM;
     use std::{os::unix::process::parent_id, time::Duration};
