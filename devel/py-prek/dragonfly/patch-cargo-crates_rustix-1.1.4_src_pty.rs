--- cargo-crates/rustix-1.1.4/src/pty.rs.orig	2026-10-26 02:50:32 UTC
+++ cargo-crates/rustix-1.1.4/src/pty.rs
@@ -17,6 +17,7 @@ use crate::{backend, io};
         apple,
         linux_like,
         target_os = "freebsd",
+        target_os = "dragonfly",
         target_os = "fuchsia",
         target_os = "illumos"
     )
@@ -125,6 +126,7 @@ pub fn openpt(flags: OpenptFlags) -> io::Result<OwnedFd> {
         apple,
         linux_like,
         target_os = "freebsd",
+        target_os = "dragonfly",
         target_os = "fuchsia",
         target_os = "illumos"
     )
