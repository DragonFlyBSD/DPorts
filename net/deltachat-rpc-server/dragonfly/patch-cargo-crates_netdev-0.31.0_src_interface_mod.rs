--- cargo-crates/netdev-0.31.0/src/interface/mod.rs.orig	2026-10-26 02:17:57 UTC
+++ cargo-crates/netdev-0.31.0/src/interface/mod.rs
@@ -9,6 +9,7 @@ pub use self::types::*;
     target_os = "macos",
     target_os = "openbsd",
     target_os = "freebsd",
+    target_os = "dragonfly",
     target_os = "netbsd",
     target_os = "ios",
     target_os = "android"
@@ -19,6 +20,7 @@ mod unix;
     target_os = "macos",
     target_os = "openbsd",
     target_os = "freebsd",
+    target_os = "dragonfly",
     target_os = "netbsd",
     target_os = "ios",
     target_os = "android"
